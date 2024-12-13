#include <iostream>

using namespace std;

class Printer
{
	string model; // �𵨸�
	string manufacturer; //������

	int printedCount; // �μ� �ż�
	int availableCount; // ���� �ܷ�
public:
	Printer(string model, string manufacturer, int pages)
	{
		this->model = model;
		this->manufacturer = manufacturer;
		printedCount = 0;
		availableCount = pages;
	}

	int getavailableCount()
	{
		return availableCount;
	}

	void print(int pages)
	{
		availableCount -= pages;
	}

	void printerInfo()
	{
		cout << model << " ," << manufacturer << " ,���� ���� " << availableCount << "�� ,";
	}
};

class Inkjet_Printer : Printer
{
	int availableInk;
public:

	Inkjet_Printer(string model, string manufacturer, int pages, int ink) : Printer(model,manufacturer,pages)
	{
		availableInk = ink;
	}

	void printInkJet(int pages)
	{
		if (availableInk < pages)
		{
			cout << "��ũ�� �����Ͽ� ����Ʈ�� �� �����ϴ�.\n";
			return;
		}

		if (getavailableCount() < pages)
		{
			cout << "���̰� �����Ͽ� ����Ʈ�� �� �����ϴ�.\n";
			return;
		}

		availableInk -= pages;
		print(pages);

		cout << "����Ʈ�Ͽ����ϴ�.\n";
	}

	void show()
	{
		printerInfo();
		cout << "���� ��ũ " << availableInk << '\n';
	}
};

class Laser_Printer : Printer
{
	int availableToner;
public:
	Laser_Printer(string model, string manufacturer, int pages, int toner) : Printer(model, manufacturer, pages)
	{
		availableToner = toner;
	}

	void printLaser(int pages)
	{
		if (availableToner < pages)
		{
			cout << "��ʰ� �����Ͽ� ����Ʈ�� �� �����ϴ�.\n";
			return;
		}

		if (getavailableCount() < pages)
		{
			cout << "���̰� �����Ͽ� ����Ʈ�� �� �����ϴ�.\n";
			return;
		}

		availableToner -= pages;
		print(pages);

		cout << "����Ʈ�Ͽ����ϴ�.\n";
	}

	void show()
	{
		printerInfo();
		cout << "���� ��� " << availableToner << '\n';
	}
};


int main()
{
	Inkjet_Printer ip("Officejet V40","HP",5,10);
	Laser_Printer lp("SCX-6x45", "�Ｚ����", 3, 20);

	cout << "���� �۵����� 2 ���� �����ʹ� �Ʒ��� ����\n";

	cout << "��ũ�� : ";
	ip.show();
	cout << "������ : ";
	lp.show();

	cout << '\n';

	while (true)
	{
		cout << "(1: ��ũ��, 2:������)�� �ż� �Է�>>";

		int n, pages;

		cin >> n >> pages;

		if (n == 1)
		{
			ip.printInkJet(pages);
		}
		else if (n == 2)
		{
			lp.printLaser(pages);
		}

		ip.show();
		lp.show();

		char c;

		cout << "��� ����Ʈ �Ͻðڽ��ϱ�(y/n)>>";
		cin >> c;

		if (c == 'y')continue;
		else break;

		cout << '\n';
	}

	return 0;
}