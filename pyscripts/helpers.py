def fast_log(x):
    result = 0
    while x := (x >> 1): pass
    return result
