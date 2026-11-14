#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
public:
    void setWidth(double w);
    void setHeight(double h);

    double getArea();
    double getCircum();

private:
    double width;
    double height;
};

#endif // RECTANGLE_H