#define TINT_MORNING Q_8_8(0.7), Q_8_8(0.7), Q_8_8(0.9)
#define TINT_DAY     Q_8_8(1.0), Q_8_8(1.0), Q_8_8(1.0)
#define TINT_NIGHT   Q_8_8(0.6), Q_8_8(0.6), Q_8_8(0.92)

static const u16 sTimeOfDayTints[][3] = {
    [0] = { TINT_NIGHT },
    [1] = { TINT_NIGHT },
    [2] = { TINT_NIGHT },
    [3] = { TINT_NIGHT },
    [4] = { Q_8_8(0.6), Q_8_8(0.65), Q_8_8(1.0) },
    [5] = { TINT_MORNING },
    [6] = { TINT_MORNING },
    [7] = { TINT_MORNING },
    [8] = { Q_8_8(0.9), Q_8_8(0.85), Q_8_8(1.0) },
    [9] = { Q_8_8(1.0), Q_8_8(0.9), Q_8_8(1.0) },
    [10] = { TINT_DAY },
    [11] = { TINT_DAY },
    [12] = { TINT_DAY },
    [13] = { TINT_DAY },
    [14] = { TINT_DAY },
    [15] = { TINT_DAY },
    [16] = { TINT_DAY },
    [17] = { Q_8_8(1.0), Q_8_8(0.98), Q_8_8(0.9) },
    [18] = { Q_8_8(0.9), Q_8_8(0.7), Q_8_8(0.67) },
    [19] = { Q_8_8(0.75), Q_8_8(0.66), Q_8_8(0.77) },
    [20] = { Q_8_8(0.7), Q_8_8(0.63), Q_8_8(0.82) },
    [21] = { TINT_NIGHT },
    [22] = { TINT_NIGHT },
    [23] = { TINT_NIGHT },
};