#include <iostream>
#include <string>

using namespace std;

class Student
{
	private:
		string name;
		int ID;
		double grade;


	public:

		Student();
		/*{
			name = " ";
			ID = 0;
			grade = 0;
		}*/
		string get_name() {return name;}
		int get_ID() { return ID;}
		double get_grade() {return grade;}

		void set_name(string new_name) {name = new_name;}
		void set_ID(string new_ID) {name = new_ID;}
		void set_grade(string new_grade) {name = new_grade;}
};

//Constructor to initialise all the values
Student::Student(): name(""), ID(0), grade(0)
{

}

int main()
{
	Student s1;

	s1.set_name("Barry");

	cout << s1.get_name() << endl;

	return 0;
}