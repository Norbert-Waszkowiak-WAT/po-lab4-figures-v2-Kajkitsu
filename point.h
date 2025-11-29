//
// Created by nwaszkowiak on 26.11.24.
//

#ifndef PO_LAB3_FIGURES_POINT_H
#define PO_LAB3_FIGURES_POINT_H

#include <string>


class Point {
private:
    double x;
    double y;
public:
    Point(double x, double y);

    Point(const Point &other);

    bool equals(Point &other);

    void flip();

    void move(double x, double y);

    std::string toString();

    double const getX();

    double const getY();
};


#endif //PO_LAB3_FIGURES_POINT_H
