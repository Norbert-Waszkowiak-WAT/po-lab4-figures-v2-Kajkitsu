//
// Created by nwaszkowiak on 26.11.24.
//

#ifndef PO_LAB3_FIGURES_TRIANGLE_H
#define PO_LAB3_FIGURES_TRIANGLE_H

#include "point.h"
#include "figure.h"
#include <vector>

class Triangle : public Figure {
private:
    Point a;
    Point b;
    Point c;

public:
    Triangle(Point a, Point b, Point c);

    Triangle(const Triangle &other);

    bool equals(Figure &other) override;

    void flip();

    void move(double x, double y);

    std::string toString();

    double getSurface();

    std::vector<Point> getPoints() override;

    Triangle* clone() const override;

};


#endif //PO_LAB3_FIGURES_TRIANGLE_H
