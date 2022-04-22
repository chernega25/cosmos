#include "Storage.h"

void Storage::AddBody(const Body& body) {
    _bodies.push_back(body);
}

void Storage::Tick() {
    for (auto & b1 : _bodies) {
        for (auto & b2 : _bodies) {
            if (b1.center != b2.center) {
                b1.acceleration += b1.gravitationalAcceleration(&b2);
            }
        }
    }

    for (auto & b : _bodies) {
        b.move();
    }
}
