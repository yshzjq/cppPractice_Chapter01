#include <iostream>	
#include <string>

using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius = 0) { this->radius = radius; }
	void show() { cout << "radius = " << radius << " �� ��" << endl; }

	/*Circle& operator++()
	{
		radius++;
		return *this;
	}

	Circle& operator++(int x)
	{
		Circle tmp = *this;
		radius++;
		return tmp;
	}*/

	friend Circle operator++(Circle& c);
	friend Circle& operator++(Circle& c,int x);
};

Circle operator++(Circle& c)
{
	c.radius++;
	return c;
}

Circle& operator++(Circle& c, int x)
{
	Circle tmp = c;
	c.radius++;
	return tmp;
}


int main()
{
	Circle a(5), b(4);
	++a; // �������� 1 ������Ų��.
	b = a++; // �������� 1 ������Ų��.
	a.show();
	b.show();
}


