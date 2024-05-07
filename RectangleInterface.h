#ifndef SHAPE_H
#define SHAPE_H

// Shape abstract class acts as an interface for geometric shapes.
class Shape {
public:
    virtual ~Shape() {} // Ensure a virtual destructor for proper cleanup of derived classes
    virtual bool set(double newLength, double newWidth) = 0; // Pure virtual functions to set dimensions
    virtual double getLength() const = 0;
    virtual double getWidth() const = 0;
    virtual double getArea() const = 0;
};

#endif // SHAPE_H
