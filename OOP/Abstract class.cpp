#include <iostream>
using namespace std;

 //Abstract Class
class Shape
{
    public:
    virtual void Enter_data() = 0;
    virtual void Area() = 0; // pure virtual function
};

class Rectangle : public Shape // First Derived class
{
    private:
    float length;
    float breadth;

    public:
    void Enter_data()
    {
        cout << "\n Enter the data for the Rectangle........";
        cout << "\n\t Enter the length of the rectangle: ";
        cin >> length;
        cout << "\t Enter the breadth of the rectangle: ";
        cin >> breadth;
    }
    void Area()
    {
        cout << "\n\t The area of the rectangle = " << (length * breadth);
    }
};

class Circle : public Shape // Second Derived class
{
    private:
    float radius;

    public:
    void Enter_data()
    {
        cout << "\n\n Enter the data for the Circle...........";
        cout << "\n\t Enter the radius of the circle: ";
        cin >> radius;
    }
    void Area()
    {
        cout << "\n\t The area of the circle = " << (3.14 * radius * radius);
    }
};

int main()
{
    Shape *shp;    // pointer to the object of the base class Shape
    Rectangle rec; // object of class Rectangle
    shp = &rec;
    shp->Enter_data();
    shp->Area();
    Circle cir; // object of class Circle
    shp = &cir;
    shp->Enter_data();
    shp->Area();
    return 0;
}
