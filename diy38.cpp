#include <iostream>
#include <vector>
#include <memory>
#include <string>
using namespace std;
class Shape
{
public:
virtual void area() = 0;
virtual ~Shape() {}
};
class Circle : public Shape
{
double radius;
public:
Circle(double r)
{
radius = r;
}
void area() override
{
cout << "Area of Circle: " << 3.14 * radius * radius << endl;
}
};
class Rectangle : public Shape
{
double length, breadth;
public:
Rectangle(double l, double b)
{
length = l;
breadth = b;
}
void area() override
{
cout << "Area of Rectangle: " << length * breadth << endl;
}
};
class Triangle : public Shape
{
double base, height;
public:
Triangle(double b, double h)
{
base = b;
height = h;
}
void area() override
{
cout << "Area of Triangle: " << 0.5 * base * height << endl;
}
};
unique_ptr<Shape> createShape(string name)
{
if (name == "Circle" || name == "circle")
{
double r;
cout << "Enter radius: ";
cin >> r;
return make_unique<Circle>(r);
}
else if (name == "Rectangle" || name == "rectangle")
{
double l, b;
cout << "Enter length and breadth: ";
cin >> l >> b;
return make_unique<Rectangle>(l, b);
}
else if (name == "Triangle" || name == "triangle")
{
double b, h;
cout << "Enter base and height: ";
cin >> b >> h;
return make_unique<Triangle>(b, h);
}
else
{
cout << "Invalid shape name!" << endl;
return nullptr;
}
}
int main()
{
vector<unique_ptr<Shape>> shapes;
string name;
int n;
cout << "How many shapes do you want to create? ";
cin >> n;
for (int i = 0; i < n; i++)
{
cout << "\nEnter shape name (Circle/Rectangle/Triangle): ";
cin >> name;
unique_ptr<Shape> s = createShape(name);
if (s != nullptr)
{
shapes.push_back(move(s));
}
}
cout << "\n--- Shape Areas ---\n";
for (auto &s : shapes)
{
s->area();
}
return 0;
}
