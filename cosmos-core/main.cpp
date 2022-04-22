#include <iostream>

#include "engine/Storage.h"

int main() {
    Storage s;

    s.AddBody(Body({}, 100000000, {}));
    s.AddBody(Body({100, 0}, 1, {0, -0.01}));

    for (auto i = 0; i < 20; ++i) {
        for (auto j = 0; j < 20001; ++j)
            s.Tick();
        for (auto & b : s.GetBodies()) {
            std::printf("%.5f %.5f | %.5f %.5f ||", b.center.x, b.center.y, b.velocity.x, b.velocity.y);
        }
        std::cout << '\n';
    }

    return 0;
}
