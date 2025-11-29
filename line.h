//
// Created by nwaszkowiak on 26.11.24.
//

#ifndef PO_LAB3_FIGURES_LINE_H
#define PO_LAB3_FIGURES_LINE_H

#include "point.h"
#include "figure.h"
#include <vector>

class Line : public Figure {
private:
    Point a;
    Point b;
public:
    Line(Point a, Point b);

    Line(const Line &other);

    bool equals(Figure &other) override;

    void flip();

    void move(double x, double y);

    std::string toString();

    double getSurface() override;

    std::vector<Point> getPoints() override;

    Line* clone() const override;

};


#endif //PO_LAB3_FIGURES_LINE_H
