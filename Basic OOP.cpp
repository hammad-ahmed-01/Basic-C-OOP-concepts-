// Author == Hammad Ahmed
// .cpp Microsoft VS

// using iostream
#include <iostream>

// using std namespace
using namespace std;

// defining class intro
class intro 
{
// data members in a class are private by default so we have to label public 
public:
	string name;
	int cms;
	string sec;
	float gpa;

	void introduction()
	{
		cout << " My name is  " << name << "\n My CMS ID is  " << cms << "\n I am from section  " << sec << "\n My GPA is  " << gpa;
	}
	// constructor of the class
	intro(string Name ,int CMS ,string Sec ,float GPA) 
	{
		name = Name;
		cms = CMS;
		sec = Sec;
		gpa = GPA;
	}
};
// main function
int main() 
{
	// creating object my_intro in class intro
	intro my_intro=intro("Hammad Ahmed",100100,"BSCS",3.5);
	my_intro.introduction();
	return 0;
}
