//An Abstract class can have constructor

#include <iostream>
using namespace std;

class Base {
protected:
	int x;
public:
	virtual void fun() = 0; // pure virtual function

	//constructor of base class
	Base(int i) {
		x = i;
		cout << "Constructor of base called. \n";
	}
};
class Derived :public Base {
	int y;
public:
	// calling the constructor of base class
	Derived(int i, int j) 
		:Base(i){
		y = j;
	}
	void fun() {
		cout << "X= " << x << ", Y= " << y << endl;

	}
};
int main() {
	//creating an object of derived class
	Derived d(4, 5);
	// calling the fun() function of derived class
	d.fun();
	//creating an object of derived class using the a pointer of the Base Class
	Base* ptr = new Derived(10,11);
	// calling the fun() function using the pointer
	ptr->fun();
	return 0;
}