#pragma once

#include "../utils/Math.h"

struct Point {
    Point(double x, double y) : x(x), y(y) {};
    Point() : x(0), y(0) {};
    double x;
    double y;

    inline double sDist() const {
        return x*x + y*y;
    }

    inline double dist() const {
        return sqrt(sDist());
    }

    Point norm() const;

};

inline Point operator+(const Point& a, const Point& b) {
    return {a.x + b.x, a.y + b.y};
}

inline Point operator-(const Point& a, const Point& b) {
    return {a.x - b.x, a.y - b.y};
}

inline bool operator==(const Point& a, const Point& b) {
    return (a - b).dist() < Math::dif;
}

inline bool operator!=(const Point& a, const Point& b) {
    return !(a == b);
}

inline Point operator*(const Point& a, double c) {
    return {a.x * c, a.y * c};
}

inline Point operator*(double c, const Point& a) {
    return {a.x * c, a.y * c};
}

inline Point operator/(const Point& a, double c) {
    return {a.x / c, a.y / c};
}

inline void operator+=(Point& a, const Point& b) {
    a = a + b;
}