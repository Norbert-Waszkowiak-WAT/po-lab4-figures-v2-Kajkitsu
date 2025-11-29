// group.h
#ifndef GROUP_H
#define GROUP_H

#include "figure.h"
#include <vector>
#include <memory>

class Group {
private:
    std::vector<std::shared_ptr<Figure>> figures;

public:
    Group();
    Group(const Group &other);
    void add(const Figure& figure);
    void remove(Figure& figure);
    std::string toString() const;
    bool equals(const Group& other) const;
    void flip();
    void move(double x, double y);
    double getSurface() const;
};

#endif // GROUP_H