//
// Created by nwaszkowiak on 26.11.24.
//

#include "group.h"
#include "point.h"
#include "line.h"
#include "triangle.h"
#include "quadrilateral.h"

Group::Group() {}

Group::Group(const Group &other): figures(other.figures) {}

void Group::remove(Figure &figure) {
    int index = -1;
    for (std::vector<Figure>::size_type i = 0; i < figures.size(); ++i) {
        if (figures[i]->equals(figure)) {
            index = i;
            break;
        }
    }
    if (index != -1) {
        figures.erase(figures.begin() + index);
    }
}

void Group::add(const Figure& figure) {
    figures.push_back(std::shared_ptr<Figure>(figure.clone()));
}

void Group::flip() {
    for (auto &figure : figures) {
        figure->flip();
    }
}

void Group::move(double x, double y) {
    for (auto &figure : figures) {
        figure->move(x, y);
    }
}

std::string Group::toString() const {
    std::string result = "Group(";
    for (auto &figure : figures) {
        result += figure->toString() + ", ";
    }
    result += ")";
    return result;
}

double Group::getSurface() const {
    double result = 0;
    for (auto &figure : figures) {
        result += figure->getSurface();
    }
    return result;
}

bool Group::equals(const Group& other) const {
    for (std::vector<Figure>::size_type i = 0; i < figures.size(); ++i) {
        if (!figures[i]->equals(*other.figures[i])) {
            return false;
        }
    }
    return true;
}


