//
// Created by nwaszkowiak on 26.11.24.
//

#include "line.h"
#include "point.h"
#include <vector>
#include <typeinfo>

Line::Line(Point a, Point b) : a(a), b(b) {}

Line::Line(const Line &other) : a(other.a), b(other.b) {}

void Line::flip() {
    a.flip();
    b.flip();
}

void Line::move(double x, double y) {
    a.move(x, y);
    b.move(x, y);
}

std::string Line::toString() {
    return "Line(" + a.toString() + ", " + b.toString() + ")";
}

bool Line::equals(Figure &other) {
    if (typeid(other) != typeid(Line)) {
        return false;
    }
    Line &otherLine = dynamic_cast<Line &>(other);
    return a.equals(otherLine.a) && b.equals(otherLine.b);
}

double Line::getSurface() {
    return 0.0;
}

std::vector<Point> Line::getPoints() {
    return std::vector<Point>{a, b};
}

Line* Line::clone() const { return new Line(*this); } // Implement clone method

