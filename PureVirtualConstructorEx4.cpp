#include <iostream> 
using namespace std;
class Shape {
public:
	// pure virtual function providing interface framework
	virtual int getArea() = 0;
	void setWidth(int w) {
		width = w;
	}
	void setHeight(int h) {
		height = h;
	}
protected:
	int width;
	int height;
};

class Rec :public Shape {
public:
	int getArea() {
		return(width * height);
	}
};
class Circle :public Shape {
public:
	int getArea() {
		return(width * height)/2;
	}
};
int main() {
	Rec r;
	Circle c;
	r.setHeight(5);
	r.setWidth(7);
	cout << "Total rectangle area: " << r.getArea() << endl;

	c.setHeight(5);
	c.setWidth(7);
	cout << "Total rectangle area: " << c.getArea() << endl;

}
