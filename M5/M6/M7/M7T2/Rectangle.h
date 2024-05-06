



//Header File




#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>

class Rectangle {
private:
    double width;
    double length;

public:
    Rectangle(double, double);
    void setWidth(double);
    void setLength(double);
    double getWidth() const;
    double getLength() const;
    double getArea() const;
    void drawRectangle() const; // New method for drawing rectangle
};

Rectangle::Rectangle(double len, double wid) {
    width = wid;
    length = len;

    if (width < 0) {
        width = -width;
    }
    if (length < 0) {
        length = -length;
    }
}

void Rectangle::setWidth(double w) {
    width = w;
}

void Rectangle::setLength(double l) {
    length = l;
}

double Rectangle::getWidth() const {
    return width;
}

double Rectangle::getLength() const {
    return length;
}

double Rectangle::getArea() const {
    double area = length * width;
    return area;
}

void Rectangle::drawRectangle() const {
    // Draw the rectangle using ASCII characters
    for (int i = 0; i < length; i++) {
        for (int j = 0; j < width; j++) {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
}

#endif
