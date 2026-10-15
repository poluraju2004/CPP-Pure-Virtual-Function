#include <iostream>
using namespace std;
class Base_Abstract {
public:
	virtual void print() = 0;//pure virtual function
};
class Derived : public Base_Abstract {
public:
	void print()  {
		cout << "Ovveriding pure virtual function in derived class.\n ";
	}
};
int main() {
	//error canoot instantiate an abstract class
	//base_abstract object: //compile time error
	Base_Abstract* a;
	Derived d;
	d = &a;
	d->print();
	return 0;


}