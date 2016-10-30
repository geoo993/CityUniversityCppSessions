//============================================================================
// Name        : SessionTwo.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>//include directives
#include <string>

using namespace std; // namespace library

/*
//comments:  what this does
const double pi = 3.14159; //constant definitions
int count;//global variables
int foo(int x) {
}//function definitions
class foo bar { };//class definitions
*/

class date {

private:

	int day, month, year;

	//const int days_per_week = 7;
public:
	//constructors

	int current_day(){ return day; }
	int current_month(){ return month; }
	int current_year() { return year; }

	//date(); // todayÕs date
	date() : day(current_day()),
	month(current_month()),
	year(current_year()) {}

	//date(int d, int m);// day and month
	date(int d, int m) :
	day(d), month(m) {}

	//date(int d, int m, int y);// day, month, year
	date(int d, int m, int y) :
	day(d), month(m), year(y) {}

	int get_day() const { return day; }
	int get_month() const { return month; }
	int get_year() const { return year; }

	void set_day(int day) { this -> day = day; } ;
	void set_month(int month) { this -> month = month; } ;
	void set_year(int year) { this -> year = year; } ;

	void printDate (){ cout << day << "/" << month << "/" << year << endl; }

};


int main() {


	date today; // uses default constructor
	// NOTE: NO PARENTHESES!!!
	date christmas(25, 12);

	date d1 = today;
	date d2(today); // equivalent
	d1 = christmas;

	cout << today.get_day() << endl;

	d2.set_month(11);
	d2.printDate();

	christmas.set_year(christmas.get_year() + 5);

	cout << date().get_day() << endl;

	christmas.printDate();

	date d;
	d = date(16, 05,10);
	d.printDate();




	return 0;
}
