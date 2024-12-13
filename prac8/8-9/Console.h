#ifndef Console_H
#define Console_H

#include "AirlineBook.h"


class Console
{
	Schedule* schedule;

public:

	Console() {};
	Console(Schedule* schedule) { this->schedule = schedule; }

	void start();
	static int showMenu(); // �޴� �Է� �Լ�
	static int showTime();
	int inputSeats(int time);
	void showSeats();

	static string showName();
	static string strinput();

};

#endif
