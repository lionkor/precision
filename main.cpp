#include <iostream>
#include <cassert>

static constexpr bool double_equals(double a, double b, double precision = 1e-10) {
    return (a - b < 0 ? -(a - b) : a - b) < precision;
}

int main(int, char**) {
    // ghetto tests

    // these are the same with precision of 5
    assert(double_equals(0.000001, 0.000009, 1e-5));
    // these are not
    assert(!double_equals(0.000001, 0.000019, 1e-5));
}
