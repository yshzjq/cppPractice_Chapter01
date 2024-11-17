#include <iostream>
#include <string>

using namespace std;

class Circle {
	int radius; // ���� ������ �� 
public:
	void setRadius(int radius); // �������������Ѵ�.
	double getArea(); // ������ �����Ѵ�
};

void Circle::setRadius(int radius)
{
	this->radius = radius;
}

double Circle::getArea()
{
	return radius * radius * 3.14f;
}

int main()
{
	int circnt;

	cout << "���� ���� >> ";

	cin >> circnt;

	Circle* circle = new Circle[circnt];

	int result = 0;

	for (int i = 0; i < circnt; i++)
	{
		int radius;

		cout << "�� " << i + 1 << "�� ������ >> ";

		cin >> radius;

		circle[i].setRadius(radius);

		if (circle[i].getArea() > 100.f) result++;
	}

	cout << "������ 100���� ū ���� " << result << "�� �Դϴ�.";

	delete[] circle;

	return 0;
}
