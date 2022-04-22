#include "Point.h"

Point Point::norm() const {
    return *this / dist();
}
