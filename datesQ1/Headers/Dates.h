// "Dates.h"
#ifndef Dates_H
#define Dates_H
#include <string>

class Dates
{
	private:
		int month;
		int day;
		int year;
	public:
		Dates(int m=1, int d=1, int y=2001);
		static const std::string monthNames[12];

		//Methods to get class variables
		int getMonth();
		int getDay();
		int getYear();

		// Methods to set value of private variables
		void setMonth(int);
		void setDay(int);

		// Methods to check for accurate inputted numbers
		bool checkMonth(int);
		bool checkDay(int, int);

		// Methods to output date in different formats
		void printSlashStyle();
		void printUSStyle();
		void printEuropeStyle();
};

#endif
