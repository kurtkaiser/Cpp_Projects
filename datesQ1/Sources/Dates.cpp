// "Dates.cpp"
#include <iostream>
#include "Dates.h"
using namespace std;

const string Dates::monthNames[] = {"January", "February", "March", "April", "May", "June",
            "July", "August", "September", "October", "November", "December"};

Dates::Dates(int m, int d, int y):month(m), day(d), year(y){}

//Methods to get class variables
int Dates::getMonth(){
    return month;
}
int Dates::getDay(){
    return day;
}
int Dates::getYear(){
    return year;
}

// Methods to set value of private variables
void Dates::setMonth(int m)
{
    month = m;
}
void Dates::setDay(int d)
{
    day = d;
}

// Methods to check for accurate inputted numbers
bool Dates::checkMonth(int m){
    if (m > 0 && m <= 12)
        return true;
    month = 1;
    cout << "Invalid month entered.\nDefault of 1 used instead.\n\n";
    return false;
}
bool Dates::checkDay(int m, int d){
    if (d<1){
        day = 1;
        return false;
    }
    else if(d <= 29)
        return true;
    else if( m==4 || m==6 || m==9 || m==11){
        if (d <= 30){
            return true;
        }
    } else if (d <= 31)
        return true;
    day = 1;
    cout << "Invalid day entered.\nDefault of 1 used instead.\n\n";
    return false;
}

// Methods to output Dates in different formats
void Dates::printSlashStyle(){
	cout << month << "/" << day << "/"<<year<< endl;
}
void Dates::printUSStyle(){
	cout << monthNames[month-1] << " " << day << ", " << year << endl;
}
void Dates::printEuropeStyle(){
	cout << day<< " " << monthNames[month-1] << " "<<year<< endl;
}

