#ifndef Seat_H
#define Seat_H

#include "Schedule.h"
#include "string"

using namespace std;

class Seat
{
	string name;
public:
	Seat() { name = "---"; }

	string getName() { return name; }
	
	void setSeat(string name) { this->name = name; }
	void cancelSeat(string name) {
		if (this->name == name) this->name = "---";
		else
		{
			cout << "�Էµ� ������ �ùٸ��� �ʾ� ���� ��ҿ� �����Ͽ����ϴ�.	";
		}
	
	}
};

#endif
