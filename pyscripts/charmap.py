class Charmap():
    __slots__ = ("_EOS", "_chars")

    def __init__(self):
        self._EOS = None
        self._chars = { }

    def parseCharmap(self, filename):
        f = open(filename, "r")

        while (line := f.readline()):
            line = line.strip()

            if line.startswith("@"):
                continue

            try:
                lhs, _, rhs = line.rpartition("=")
            except Exception:
                print(line)
                raise ValueError("Could not split line to LHS and RHS.")

            lhs = lhs.strip()
            rhs = rhs.strip()

            if lhs.startswith("'"):
                lhs = lhs[1:-1]
                is_escape = lhs.startswith("\\")

                if (not is_escape and len(lhs) > 1):
                    raise ValueError("Multiple Characters.")

                if (is_escape and lhs[1] == "'"):
                    lhs = "'"

                comment_start = rhs.find("@")
                if comment_start != -1:
                    rhs = rhs[:comment_start]

                if lhs == "$":
                    self._EOS = int(rhs, 16)
                    continue

                self._chars[int(rhs, 16)] = lhs

        f.close()

    def decode(self, string, unknown=""):
        ret = ""

        for i in string:
            if i == self._EOS:
                break

            ret += self._chars.get(i, unknown)

        return ret