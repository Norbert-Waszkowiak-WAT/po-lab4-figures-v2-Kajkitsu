//
// Created by nwaszkowiak on 26.11.24.
//

#include "point.h"
#include <sstream>
#include <iomanip>


Point::Point(double x, double y) : x(x), y(y) {}

Point::Point(const Point &other) : x(other.x), y(other.y) {}

void Point::flip() {
    x = -x;
    y = -y;
}

void Point::move(double x, double y) {
    this->x += x;
    this->y += y;
}

std::string Point::toString() {
    std::ostringstream oss;
    oss << std::fixed << std::setprecision(1);
    oss << "Point(" << x << ", " << y << ")";
    return oss.str();
}

bool Point::equals(Point &other) {
    return x == other.x && y == other.y;
}

double const Point::getX() {
    return x;
}

double const Point::getY() {
    return y;
}


