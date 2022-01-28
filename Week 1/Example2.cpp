#include <iostream>
using namespace std;

void dosomething(double[]);
void printArray(double[]);

int main()
{
	int x = 10;
	int* ptr;
	double numbers[] = { 10, 20, 30, 40, 50 };
	printArray(numbers);

	cout << endl << endl << endl;

	dosomething(numbers);

	printArray(numbers);
	//cout << *ptr<< endl;

	return 0;
}

void dosomething(double nums[])
{
	for (int i = 0; i < 5; i++)
	{
		nums[i] *= 2;
	}
}

void printArray(double nums[])
{
	for (int i = 0; i < 5; i++)
	{
	cout << nums[i]<<endl;
	}
}