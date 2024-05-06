





class Rectangle
{
private:
    double width;
    double length;

public:
    void setWidth(double);
    void setLength(double);
    double getWidth() const;
    double getLength() const;
    double getArea() const;
};


void Rectangle::setWidth(double w) {
    width = w;
}

void Rectangle::setLength(double 1) {
    length = 1;
}

double Rectangle::getWidth() const {
    return length;
}

double Rectangle::getArea() const {
    double area = length * width;
    return area;
}

