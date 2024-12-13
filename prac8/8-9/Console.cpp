#include <iostream>
#include "AirlineBook.h"
#include "Console.h"

using namespace std;

void Console::start()
{
	cout << "***** �Ѽ��װ��� ���Ű��� ȯ���մϴ� ***** \n\n";

	while (true)
	{
		switch (showMenu())
		{
			case 1: 
			{
				int time = showTime();
				int seat = inputSeats(time);
				string name = showName();

				schedule[time].addSeat(seat, name);

				break;
			}
			case 2: // ���
			{
				int time = showTime();
				int seat = inputSeats(time);
				string name = showName();

				schedule[time].cancelSeat(seat, name);
				break;
			}
			case 3:
			{
				showSeats();
				break;
			}
			case 4:
			{
				cout << "���� �ý����� �����մϴ�.";
				return;
			}
			default: 
			{
				cout << "�ùٸ��� ���� �Է��Դϴ�.";
				break;
			}
		}
	}
}

int Console::showMenu()
{
	cout << "����:1, ���:2, ����:3, ������:4>> ";
	int n;
	cin >> n;
	return n;
}

int Console::showTime()
{
	cout << "07��:1, 12��:2, 17��:3>> ";
	int n;
	cin >> n;
	return n-1;
}

int Console::inputSeats(int time)
{

	schedule[time].showSchedules();

	cout << '\n' << "�¼���ȣ>> ";
	int n;
	cin >> n;
	return n-1;
}

void Console::showSeats()
{
	for (int i = 0; i < 3; i++)
	{
		schedule[i].showSchedules();
	}
}


string Console::showName()
{
	cout << "�̸� �Է�>> ";
	string str;
	cin >> str;
	return str;
}

