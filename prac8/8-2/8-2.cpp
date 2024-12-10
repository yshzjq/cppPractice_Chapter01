#include <iostream>
#include <string>

using namespace std;

class Circle
{
	int radius;
public:
	Circle(int radius = 0) { this->radius = radius; }
	int getRadius() { return radius; }
	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }
};

class NamedCircle : Circle
{
	string name;
public:
	NamedCircle() : Circle(0)
	{
		name = "";
	}

	NamedCircle(int r, string name) : Circle(r)
	{
		this->name = name;
	}

	int getRadius()
	{
		return ((Circle*)this)->getRadius();
	}

	string getName()
	{
		return name;
	}
};

int main()
{
	NamedCircle pizza[5];

	string name;
	int r;

	cout << "5 ���� ���� �������� ���� �̸��� �Է��ϼ���\n";

	for (int i = 0; i < 5; i++)
	{
		cout << i + 1 << ">>";
		cin >> r >> name;

		pizza[i] = NamedCircle(r, name);

	}


	int max = pizza[0].getRadius();
	int idx = 0;
	for (int i = 1; i < 5; i++)
	{
		if (max < pizza[i].getRadius())
		{
			max = pizza[i].getRadius();
			idx = i;
		}
	}

	cout << "���� ������ ū ���ڴ� " << pizza[idx].getName() << "�Դϴ�.";

	return 0;
}