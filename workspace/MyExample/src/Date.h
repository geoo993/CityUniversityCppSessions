/*
 * Date.h
 *
 *  Created on: Oct 11, 2016
 *      Author: GeorgeQuentin
 */

#ifndef DATE_H_
#define DATE_H_
#include <iostream>

using namespace std;

namespace nameprogramming {

class Date {

	int d, m, y;

public:
//	Date();
//	virtual ~Date();

	// A fully specified date
	Date(int dd, int mm, int yy) :
		d(dd), m(mm), y(yy) {
	}

	// The day of the month (1-31)
	int day() const {
		return d;
	}

	// The month of the year (1-12)
	int month() const {
		return m;
	}

	// The year number
	int year() const {
		return y;
	}

	void showDate(){ cout << d << m << y << endl;  }
	// Position B: NOT GOOD! operator<< is an independent function!

};

}

#endif /* DATE_H_ */
