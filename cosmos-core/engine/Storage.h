#pragma once

#include "../bodies/Body.h"
#include <list>
#include <memory>

class Storage {
public:
    void AddBody(const Body&);
    void Tick();
    const std::list<Body>& GetBodies() { return _bodies; }

private:
    std::list<Body> _bodies;
};