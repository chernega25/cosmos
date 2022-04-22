#pragma once

#include <cmath>

struct Math {
    constexpr static double dif = 1e-10;
    constexpr static double G = 6.6743 * 1e-11;

    inline bool static eq(const double& a, const double& b) {
        return std::abs(a-b) < dif;
    }
};