#include<iostream>
#include<cmath>
using namespace std;

class Circle
{
public:
	//Constructors
	Circle() //Default constructor
	{
		radius = 10;
	}

	Circle(double r) //Default constructor
	{
		radius = r;
	}

	//Properties (aka Variables)
	void setRadious(double r);

	double getRadious()	{return radius;}
	double calcArea()
	{
		//Area of a circle is PI*r^2
		return 3.14 * pow(radius, 2);
	}

private:
	double radius;

	// Behaviours (aka Functions)
};

void Circle::setRadious(double r)
{
	if (r > 0)
	{
		radius = r;
	}
	else
	{
		cout << "Please provide a positive number!" << endl;
	}
	
}

int main()
{
	Circle circle1, circle2(2.5);

	circle1.setRadious(1);
	circle2.setRadious(2.5);

	//print values

	cout << "The area of circle 1 is" << circle1.calcArea() << endl;
	cout << "The area of circle 2 is" << circle2.calcArea()<<endl;

	return 0;
}