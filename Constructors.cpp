// Author == Hammad Ahmed
// Microsoft .vs

#include<iostream>
using namespace std;

class constructor1
{
	int a, b;
public:
	void print()
	{
		cout << a << "+" << b << endl;
	}
	constructor1(int x, int y)
	{
		a = x;
		b = y;
	}// constructor declaration 

	constructor1(int x)
	{
		a = x;
		b = 0;
	}// constructor declaration

	constructor1()
	{
		a = 1;
		b = 1;
	}// constructor declaration

};

int main()
{
	constructor1 c1(10, 10);
	c1.print();

	// the constructor with alike parametres would be invoked
	constructor1 c2 = constructor1(100);
	c2.print();

	constructor1 c3;
	c3 = constructor1(10, 45);
	c3.print();
}
