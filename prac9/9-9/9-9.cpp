#include <iostream>
#include <string>

using namespace std;

class Printer
{
protected:
	string model;
	string manufacturer;

	int printedCount;
	int availableCount;

public:

	Printer(string model = "", string manufactuer = "", int printedCount = 0, int availableCount = 0) {};
	virtual void show() {};
	void print(int count)
	{
		if (printedCount - count < 0)
		{
			cout << "��ũ�� �����Ͽ� ����Ʈ�� �� �����ϴ�.\n";
			return;
		}

		if (availableCount - count < 0)
		{
			cout << "������ �����Ͽ� ����Ʈ�� �� �����ϴ�.\n";
			return;
		}

		printedCount -= count;
		availableCount -= count;

		cout << "����Ʈ �Ͽ����ϴ�.\n";
	};
};

class InkjetPrinter : public Printer
{
public:
	InkjetPrinter(string model, string manufactuer, int printedCount, int availableCount)
	{
		this->model = model;
		this->manufacturer = manufactuer;

		this->printedCount = printedCount;
		this->availableCount = availableCount;
	}

	void show()
	{
		cout << "��ũ�� : " << model << ", " << manufacturer << ", " << printedCount << ", " << availableCount << '\n';
	}
};

class LaserPrinter : public Printer
{
public:
	LaserPrinter(string model, string manufactuer, int printedCount, int availableCount)
	{
		this->model = model;
		this->manufacturer = manufactuer;

		this->printedCount = printedCount;
		this->availableCount = availableCount;
	}

	void show()
	{
		cout << "������ : " << model << ", " << manufacturer << ", " << printedCount << ", " << availableCount << '\n';
	}
};

int main()
{
	Printer printers[3];
	int printerCounts = 2;


	printers[1] = InkjetPrinter("Office jet V40" , "HP", 5, 10);
	printers[2] = LaserPrinter("SCX-6X45" , "�Ｚ����", 3, 20);

	cout << "���� �۵����� " << printerCounts << "���� �����ʹ� �Ʒ��� ����\n";

	while (true)
	{
		printers[1].show();
		printers[2].show();

		int printerNum;
		int pages;
		
		cout << "������(1:��ũ��, 2:������)�� �ż� �Է�>>";
		cin >> printerNum >> pages;

		printers[printerNum].print(pages);

		char ans;

		cout << "��� �Ͻðڽ��ϱ�?";

		cin >> ans;

		if (ans == 'n') break;

	}

}