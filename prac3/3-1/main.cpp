#include <iostream>
using namespace std;

class Tower
{
	int meter;
public:
	Tower();
	Tower(int _meter);

	int getHeight();
};

Tower::Tower()
{
	meter = 1;
}

Tower::Tower(int _meter)
{
	meter = _meter;
}

int Tower::getHeight()
{
	return meter;
}

int main()
{
	Tower myTower; // 1����
	Tower seoulTower(100);
	cout << "���̴� " << myTower.getHeight() << "����" << endl;
	cout << "���̴� " << seoulTower.getHeight() << "����" << endl;
}
