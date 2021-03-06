//============================================================================
// Name        : SessionSix.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class date {
private:
	int day, month, year;

public:
	date(); // today�s date
	date(int day, int month) :
		day(day), month(month) {
	};

	date(int day, int month, int year) :
		day(day), month(month), year(year) {
	};

	//date(date &&other) = default;//move copy constructor

	date(const date &other) {//copy constructor
		cout << "Copy Constructor" << endl;
		day = other.day;
		month = other.month;
		year = other.year;
	}

	//date &operator=(const date &other)= default;
	date &operator=(const date &other)//assignment constructor
	{
		cout << "Assignment Constructor" << endl;
		day = other.day;
		month = other.month;
		year = other.year;
		return *this;
	}

			int get_day() const {
				return day;
			}
			int get_month() const {
				return month;
			}
			int get_year() const {
				return year;
			}

	virtual string desc() const {

		return to_string(day) + "/" + to_string(month) + "/" + to_string(year);
	}

	virtual void print(){
		cout << "Date: "<< day << "/" << month << "/" << year << endl;
	}

};


class Holiday: public date {
private:
	string name;

public:

	Holiday(string n) :
		date(), name(n) {
	}
	Holiday(string n, int d, int m) :
		date(d, m), name(n) {
	}
	Holiday(string n, int d, int m, int y) :
			date(d, m, y), name(n) {
	}
	string get_name() const {
		return name;
	}

	virtual string desc() const {
	      return name + " " + date::desc();
	}

	virtual void print(){
		cout << "Holiday: " << name << endl;
	}

};

void print_day1(date d) {
	 cout << "It s " << d.desc() << endl;
}
void print_day2(date &d) {
	 cout << "It s " << d.desc() << endl;
}


int main() {

	Holiday holiday("Anzac Day", 25, 4);


	Holiday hol("Anzac", 25, 4, 5);

	date d = holiday;

	d = holiday;
	d = hol;

	d.desc();


	Holiday xmas("Christmas", 25, 12, 2004);
	print_day1(xmas);     // It�s 25/12/2004
	print_day2(xmas);     // It�s Christmas 25/12/2004

	return 0;
}
