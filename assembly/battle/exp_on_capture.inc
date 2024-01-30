.global ExpOnCapture_Hook

ExpOnCapture_Hook:
    setbyte 0x201600f, 0x0
    setbyte 0x2024aa8, 0x0
    setbyte 0x2023c0d, 0x0
    getexp 0x0
    trysetcaughtmondexflags 0x81d9ee3
    goto 0x81d9ed8
