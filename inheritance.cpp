#include <iostream>
#include <string>

using namespace std;

class A
{
	public:
		int a;
		void set_a(int a)
		{
			//"this" points at the class itself
			this->a = a;
		}
		//const stops the function from changin the object
		int get_a() const{
			return a;
		}
};


//B Inherits from a
class B : protected A
{
	private:
		double x;
	public:
		void set_x(double x)
		{
			this->x = x;
		}

		//Modifying existing member to redefine its behaviours
		void set_a(int a)
		{
			if(a < 0)
			{
				this->a=0;
			}else
			{
				//Both do the same, just calls the parent member function to do it instead
				A::set_a(a);
				this->a = a;
			}
		}

		double foo()
		{
			return x*a;
		}

		int get_a()
		{
			return A::get_a();
		}
};

int main()
{
	A a;
	B b;
	a.set_a(-50);
	b.set_a(-50);
	cout << a.get_a() << endl;
	cout << b.get_a() << endl;
	//Same method yet produces different values as b has been modified

	return 0;
}