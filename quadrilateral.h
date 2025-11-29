//
// Created by nwaszkowiak on 26.11.24.
//

#ifndef PO_LAB3_FIGURES_QUADRILATERAL_H
#define PO_LAB3_FIGURES_QUADRILATERAL_H

#include "point.h"
#include "figure.h"
#include <vector>

class Quadrilateral : public Figure {
private:
    Point a;
    Point b;
    Point c;
    Point d;

    double calculateAngle(Point p1, Point p2, Point p3);

    double calculateTheta(Point a, Point b, Point c, Point d);

public:
    Quadrilateral(Point a, Point b, Point c, Point d);

    Quadrilateral(const Quadrilateral &other);

    bool equals(Figure &other) override;

    void flip();

    void move(double x, double y);

    std::string toString();

    double getSurface();

    std::vector<Point> getPoints() override;

    Quadrilateral* clone() const override;

};

#endif //PO_LAB3_FIGURES_QUADRILATERAL_H