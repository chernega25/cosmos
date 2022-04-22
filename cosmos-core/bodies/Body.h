#pragma once

#include "../geometry/Point.h"

struct Body {
    Body(const Point& center, double mass, const Point& velocity) :
        center(center), mass(mass), velocity(velocity) {};
    Point center;
    double mass;
    Point velocity;
    Point acceleration{};

    inline void move() {
        center += velocity;
        velocity += acceleration;
        acceleration = {};
    }

    inline static double gravitation(const Body* a, const Body* b) {
        return Math::G/(a->center-b->center).sDist();
    }

    inline Point gravitationalAcceleration(const Body* other) const {
        return (other->center - center).norm() * other->mass * gravitation(this, other);
    }
};
