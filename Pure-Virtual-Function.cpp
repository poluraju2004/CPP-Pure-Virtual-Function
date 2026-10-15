// Pure-Virtual-Function Exmaples

#include <iostream>
using namespace std;
class Animal {
public:
	virtual void sound() = 0;//pure virtual function
};
class Dog : public Animal {
public:
	//void sound()  {
	//	cout << "Dog barks: ";
	//}
};

int main()
{
	Dog d;
	d.sound();

	return 0;
  
}
//complier Error : cannot declare variable 'd' to be abstract type