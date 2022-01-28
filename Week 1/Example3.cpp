#include <iostream>
#include<string>
using namespace std;

class Person
{
public:
	//Constructor
	Person()
	{
		name = "Default";
		age = 1;
	}
	Person(string n)
	{
		name = n;
		age = 1;
	}
	Person(int a)
	{
		name = "Default";
		age = a;

	}

	Person(string n = "Default", int a = 1)
	{
		name = n;
		age = a;
	}
	
	// Functions
	string getName() { return name; }
	void setName(string n) { name = n; }

	int getAge() { return age; }
	void setAge(int a) { age = a; }
private:
	// Variables
	string name;
	int age;
};

struct Rectangle
{
	int width, height;

};

int main()
{
	Rectangle* pRect = nullptr;
	Person* pPerson = nullptr;

	Rectangle rect;
	pRect = &rect;

	(*pRect).width = 10;
	pRect->height = 20;

	cout << "Area of the rectangle is: " << pRect->width * pRect->height << endl;
	// Dynamically allocate object through the pointer!
	
	pRect = new Rectangle;
	pRect->width = 6;
	pRect->height = 5;
	cout << "Area of the rectangle is: " << pRect->width * pRect->height << endl;
	delete pRect;
	pRect = nullptr;

	pPerson = new Person("Walac Balaniuc", 18);
	cout << pPerson->getName() << " is " << pPerson->getAge() << " years Old" << endl;
	delete pPerson;
	pPerson = nullptr;

	return 0;
}