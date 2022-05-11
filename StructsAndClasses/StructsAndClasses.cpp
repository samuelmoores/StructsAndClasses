#include <iostream>

using namespace std;


struct Date {
	int month;
	int year;
};

class PersonInfo {
public:
	double height;
	int weight;
	Date birthday;
	string name;
	void output(string name);
};

void print(PersonInfo person);


int main()
{
	PersonInfo Sam;

	Sam.birthday.year = 1993;
	string name = Sam.name = "Sam";

	print(Sam);

	Sam.output(name);


}

void print(PersonInfo person)
{
	cout << person.birthday.year << endl;
}

void PersonInfo::output(string name)
{
	cout << "Happy Birthday! " << name;
}