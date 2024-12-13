#ifndef AirlineBook_H
#define AirlineBook_H
#include "Schedule.h"
#include "Console.h"

using namespace std;

class AirlineBook
{
	Schedule* schedules;
	
public:

	Console console;
	AirlineBook() { 
		schedules = new Schedule[3]{ Schedule("07��"),Schedule("12��"),Schedule("17��") }; 
		console = Console(schedules);
	}
	~AirlineBook() { delete[] schedules; }

	void showSchedule(int scheduleNum){ schedules[scheduleNum].showSchedules(); }
	void addreservation(int timeNum, int seatNum, string name) { schedules[timeNum].addSeat(seatNum, name); }
};

#endif // !"AirlineBook.h"