#include <iostream>
#include <string>

using namespace std;

class Point { // 2���� ��鿡�� �� ���� ǥ���ϴ� Ŭ���� Point ����
	int x,y; //���� (x,y) ��ǥ��
public:
	//Point(Point& p) { x = p.x, y = p.y; }
	void set(int x, int y) { this->x = x; this->y = y; }
	void showPoint() {
		cout << "(" << x << "," << y << ")" << endl;
	}
};

class ColorPoint : private Point { // 2���� ��鿡�� �÷� ���� ǥ���ϴ� Ŭ����
	string color;// ���� �� ǥ��
public:
	void setColor(string color) { this->color = color; }
	void showColorPoint();
};

void ColorPoint::showColorPoint()
{
	cout << color << ":";
	showPoint();
}


int main()
{
	Point p;
	ColorPoint* pp;

	p.set(3, 5);

	pp = (ColorPoint*)&p;

	pp->setColor("what");
	pp->showColorPoint();
}

