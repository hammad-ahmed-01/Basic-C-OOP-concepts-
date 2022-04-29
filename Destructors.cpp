// Author == Hammad Ahmed
// Microsoft .VS
 
#include<iostream>
using namespace std;
class constrdestr
{
	int a, b;
	static int count; 
public:
	void print()
	{
		cout << "\n " << a << "+" << b << endl;
	}
	constrdestr(void); // constructor declaration ... constructors have no return type
	~constrdestr(); // destructor declaration ... no parameteres .. no return type .. invoked at the end of the object
};

int constrdestr::count = 1; 

constrdestr::~constrdestr()
{
	count--;
	cout << " \n Destructor " << count << " is called !!" << endl;
}
constrdestr::constrdestr(void) // this is a default constructor as it accepts no parameters
{
	cout << " \n Constructor " << count++ << " is called !!" << endl;
	a = 10;
	b = 0;
}

int main()
{
	constrdestr cd1;
	{
		cd1.print(); // by invoking this function the constructor function is called automatically
		constrdestr cd2;
		cd2.print(); // by invoking this function the constructor function is called automatically
		constrdestr cd3;
		cd3.print(); // by invoking this function the constructor function is called automatically
	}
	cout << "\n Ending this block ......... " << endl; 
	// as block ended so did the cd2 and cd3 whereas cd1 will be destroyed at the end of the program 

}
