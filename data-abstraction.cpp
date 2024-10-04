#include<iostream>
using namespace std;
class Rectangle
{
private:
    double length;
    double width;

public:
    Rectangle(double l, double w)
    {
        length = l;
        width = w;
    }

    double getArea()
    {
        return length * width;
    }

    double getPerimeter()
    {
        return 2 * (length + width);
    }

    void setDimensions(double l, double w)
    {
        if (l > 0 && w > 0)
        {
            length = l;
            width = w;
        }
        else
        {
            cout << "Invalid dimensions!" << endl;
        }
    }

    void displayDimensions()
    {
        cout << "Length: " << length << " units" << endl;
        cout << "Width: " << width << " units" << endl;
    }
};

int main()
{
    Rectangle rect(5.0, 3.0);

    cout << "Area: " << rect.getArea() << " square units" << endl;
    cout << "Perimeter: " << rect.getPerimeter() << " units" << endl;

    cout << endl;

    rect.setDimensions(10.0, 7.5);

    rect.displayDimensions();

    cout << "New Area: " << rect.getArea() << " square units" << endl;
    cout << "New Perimeter: " << rect.getPerimeter() << " units" << endl;

    return 0;
}

