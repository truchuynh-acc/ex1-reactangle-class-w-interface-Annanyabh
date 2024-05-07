#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"

// Rectangle class implements the Shape interface.
class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(); // Default constructor
    virtual ~Rectangle() {} // Destructor
    virtual bool set(double newLength, double newWidth);
    virtual double getLength() const;
    virtual double getWidth() const;
    virtual double getArea() const;
};

#endif // RECTANGLE_H
