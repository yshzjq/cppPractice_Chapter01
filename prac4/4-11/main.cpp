#include <iostream>
#include <string>

using namespace std;

class Container {
	int size; // ���� ���� ��, �ִ� ���差�� 10 
public:
	Container() { size = 10; }
	void fill(); // �ִ뷮(10)^�� ä���
	void consume(); // 1 ��ŭ�Ҹ��ϱ�
	int getSize(); // ���� ũ�� ����
};

class CoffeeVendingMachine { // Ŀ�����Ǳ⸦ ǥ���ϴ� Ŭ����
	Container tong[3]; // tong[0]�� Ŀ��, tong[l]�� ��, tong[2]�� �������� ��Ÿ�� 
	void fill(); // 3���� ���� ��� 10���� ä��
	void selectEspresso(); // ���������Ҹ� �����Ѱ��, Ŀ�� 1, �� 1 �Ҹ� 
	void selectAmericano(); // �Ƹ޸�ī�븦 ������ ���, Ŀ�� 1, �� 2 �Ҹ� 
	void selectSugarCoffee(); // ����Ŀ�Ǹ� ������ ���, Ŀ�� 1, �� 2 �Ҹ�, ���� 1 �Ҹ� 
	void show(); // ���� Ŀ��, ��, �������ܷ� ���
public:
	void run(); // Ŀ�� ���Ǳ� �۵�
};

void CoffeeVendingMachine::fill()
{
	for (int i = 0; i < 3; i++)
	{
		tong[i].fill();
	}
	show();
}

void CoffeeVendingMachine::selectEspresso()
{
	tong[0].consume();
	tong[1].consume();

	cout << "���������� �弼��\n";
}

void CoffeeVendingMachine::selectAmericano()
{
	tong[0].consume();
	tong[1].consume();
	tong[1].consume();

	cout << "�Ƹ޸�ī�� �弼��\n";
}

void CoffeeVendingMachine::selectSugarCoffee()
{
	tong[0].consume();
	tong[1].consume();
	tong[1].consume();
	tong[2].consume();

	cout << "����Ŀ�� �弼��\n";
}

void CoffeeVendingMachine::show()
{
	cout << "Ŀ�� " << tong[0].getSize() << ", �� " << tong[1].getSize() << ", ���� " << tong[2].getSize() << '\n';
}

void CoffeeVendingMachine::run()
{
	int command;

	while (true)
	{
		cout << "�޴��� �÷��ּ���(1:����������, 2:�Ƹ޸�ī��, 3:����Ŀ��, 4:�ܷ����⡢S:ä���)>> ";

		cin >> command;

		switch (command)
		{
		case 1:
			selectEspresso();
			break;

		case 2:
			selectAmericano();
			break;

		case 3:
			selectSugarCoffee();
			break;
		case 4:
			show();
			break;
		case 5:
			fill();
			break;
		}
	}

}

void Container::fill()
{
	size = 10;
}

void Container::consume()
{
	size--;
}

int Container::getSize()
{
	return size;
}


int main()
{
	CoffeeVendingMachine coffee_machine;

	coffee_machine.run();
}

