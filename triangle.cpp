//
// Created by nwaszkowiak on 26.11.24.
//

#include "triangle.h"
#include "point.h"
#include <cmath>
#include <vector>
#include <typeinfo>

Triangle::Triangle(Point a, Point b, Point c) : a(a), b(b), c(c) {}

Triangle::Triangle(const Triangle &other) : a(other.a), b(other.b), c(other.c) {}

void Triangle::flip() {
    a.flip();
    b.flip();
    c.flip();
}

void Triangle::move(double x, double y) {
    a.move(x, y);
    b.move(x, y);
    c.move(x, y);
}

std::string Triangle::toString() {
    return "Triangle(" + a.toString() + ", " + b.toString() + ", " + c.toString() + ")";
}

double Triangle::getSurface() {
    double a = sqrt(pow(this->b.getX() - this->c.getX(), 2) + pow(this->b.getY() - this->c.getY(), 2));
    double b = sqrt(pow(this->a.getX() - this->c.getX(), 2) + pow(this->a.getY() - this->c.getY(), 2));
    double c = sqrt(pow(this->a.getX() - this->b.getX(), 2) + pow(this->a.getY() - this->b.getY(), 2));
    double p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

bool Triangle::equals(Figure &other) {
    // Check if the other figure is a triangle
    if (typeid(other) != typeid(Triangle)) {
        return false;
    }
    // Cast the other figure to a triangle
    Triangle &otherTriangle = dynamic_cast<Triangle &>(other);
    return a.equals(otherTriangle.a) && b.equals(otherTriangle.b) && c.equals(otherTriangle.c);
}

std::vector <Point> Triangle::getPoints() {
    return std::vector < Point > {a, b, c};
}

Triangle *Triangle::clone() const { return new Triangle(*this); }

