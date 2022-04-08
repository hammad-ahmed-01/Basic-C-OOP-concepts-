// Author == Hammad Ahmed
// .cpp Microsoft VS

// using iostream
#include <iostream>

// using std namespace
using namespace std;

// defining class encapsulation
class encapsulation
{
private: // no need to write private as it is by default 
	string name;
	int cms;
	string sec;
	float gpa;
public:
	// public setter and getter in order to access the private data members
	void setname(string Name)
	{
		name = Name; //setter
	}
	string getname()
	{
		return name; //getter
	}
	void setgpa(float GPA)
	{
		if (GPA >= 3.5)
		gpa = GPA ;
	}
	float getgpa()
	{
		return gpa;
	}
	void setcms(int CMS)
	{
		if (CMS>=100000)
		cms = CMS;
	}
	int getcms()
	{
		return cms;
	}
	void setsec(string Sec)
	{
		sec = Sec;
	}
	string getsec()
	{
		return sec;
	}
};

int main()
{
	// creating object encaps in class
	encapsulation encaps;
	encaps.setname("Hammad");
	cout << "\n\n Name is " << encaps.getname() << endl;
	encaps.setgpa(4.0);
	cout << "\n\n GPA is " << encaps.getgpa() << endl;
	
	// creating object encaps1 in class
	encapsulation encaps1;
	encaps1.setcms(393404);
	cout << "\n\n My CMS is " << encaps1.getcms() << endl;
	encaps1.setsec("BSCS 11-A");
	cout << "\n\n My section is " << encaps1.getsec() << endl;
	
	return 0;
}
