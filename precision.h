#ifndef PRECISION_H
#define PRECISION_H

// define PREC_NO_CONSTEXPR to turn off constexpr
#ifdef PREC_NO_CONSTEXPR
#define PREC_CEXPR inline
#else
#define PREC_CEXPR constexpr
#endif

static PREC_CEXPR bool double_equals(double a, double b, double precision = 1e-10) {
    return (a - b < 0 ? -(a - b) : a - b) < precision;
}

#endif // PRECISION_H
