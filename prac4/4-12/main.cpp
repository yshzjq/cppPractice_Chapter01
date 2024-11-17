#include <iostream>
#include <string>

using namespace std;

class Circle {
	int radius; // ���� ������ ��
	string name; // ���� �̸�
public:
	void setCircle(string name, int radius); // �̸�������������
	double getArea();
	string getName();
};

void Circle::setCircle(string name, int radius)
{
	this->name = name;
	this->radius = radius;
}

double Circle::getArea()
{
	return radius * radius * 3.14f;
}

string Circle::getName()
{
	return name;
}

class CircleManager {
	Circle* p; // Circle �迭�� ���� ������
	int size; // �迭�� ũ��
	int pidx = 0;
public:
	CircleManager(int size); // size ũ���� �迭�� ���� ����. ����ڷκ��� �Է� �Ϸ� 
	~CircleManager() { delete[] p; }
	void addCircle(string name, int radius);
	void searchByName(); // ����ڷκ��� ���� �̸��� �Է¹޾� ���� ���
	void searchByArea(); // ����ڷκ��� ������ �Է¹޾� �������� ū ���� �̸� ��� 
};

CircleManager::CircleManager(int size)
{
	this->size = size;
	p = new Circle[size];
}

void CircleManager::addCircle(string name, int radius)
{
	p[pidx].setCircle(name, radius);
	pidx++;
}

void CircleManager::searchByName()
{
	string find_name;
	
	cout << "�˻��ϰ��� �ϴ� ���� �̸� >> ";

	cin >> find_name;

	for (int i = 0; i < size; i++)
	{
		if (find_name == p[i].getName())
		{
			cout << p[i].getName() << "�� ������ " << p[i].getArea() << '\n';
		}
	}
}

void CircleManager::searchByArea()
{
	int min_area;

	cout << "�ּ� ������ ������ �Է��ϼ��� >> ";

	cin >> min_area;

	cout << min_area << "���� ū ���� �˻��մϴ�.\n";

	for (int i = 0; i < size; i++)
	{
		if (min_area <= p[i].getArea())
		{
			cout << p[i].getName() << "�� ������ " << p[i].getArea() << ',';
		}
	}
}

int main()
{
	int t;

	cout << "���� ���� >> ";

	cin >> t;

	CircleManager manager(t);

	for (int i = 0; i < t; i++)
	{
		string circle_name;
		int radius;

		cout << "�� " << i + 1 << "�� �̸��� ������ >> ";

		cin >> circle_name >> radius;

		manager.addCircle(circle_name, radius);
	}

	manager.searchByName();
	manager.searchByArea();


}

