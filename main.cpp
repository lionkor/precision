#include <iostream>
#include <cassert>

#include "precision.h"

int main(int, char**) {
    // ghetto tests

    // these are the same with precision of 5
    assert(double_equals(0.000001, 0.000009, 1e-5));
    // these are not
    assert(!double_equals(0.000001, 0.000019, 1e-5));

    assert(double_equals(0.00123999, 0.00123111, 1e-5));
}
