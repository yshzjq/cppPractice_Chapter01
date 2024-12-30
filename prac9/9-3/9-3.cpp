#include <iostream>

using namespace std;

class LoopAdder { // �߻�Ŭ����
	string name; // ������ �̸�
	int x, y, sum; // x���� ������� ���� sum
	void read(); // x, y ���� �о� ���̴� �Լ�
	void write(); // sum������ϴ� �Լ�
protected:
	LoopAdder(string name = "") { // ������ �̸��� �޴´�. �ʱ갪�� ""
		this->name = name;
	}
	int getX() { return x; }
	int getY() { return y; }
	virtual int calculate() = 0; // ���� ���� �Լ�. ������ ���� ���� ���ϴ��Լ�
public:
	void run(); // �����������ϴ� �Լ�
};
void LoopAdder::read() { // x, y �Է�
	cout << name << ":" << endl;
	cout << "ó�� ������ �ι�° ������ ���մϴ�. �� ���� �Է��ϼ��� >>";
	cin >> x >> y;
}
void LoopAdder::write() { // ��� sum ���
	cout << x << "���� " << y << "������ �� = " << sum << " �Դϴ�" << endl;
}
void LoopAdder::run() {
	read(); // x, y���д´�.
	sum = calculate(); // ������ ���鼭 ����Ѵ�.
	write(); // ��� sum�� ����Ѵ�.
}

class ForLoopAdder : public LoopAdder
{
public:
	ForLoopAdder(string name) : LoopAdder(name) {};

	int calculate() override
	{
		int tmp = 0;
		for (int i = getX(); i <= getY(); i++)
		{
			tmp += i;
		}
		return tmp;
	}; 
};

int main() {
	ForLoopAdder forLoop("For Loop");
	forLoop.run();
}