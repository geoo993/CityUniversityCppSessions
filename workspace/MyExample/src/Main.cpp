//============================================================================
// Name        : Main.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <math.h>
#include <string>
#include "Date.h"

using namespace std;
using namespace nameprogramming;

class Point {
	int _x, _y;

public:
	Point(int x, int y) :
		_x(x), _y(y) {
	}

	int x() const {
		return _x;
	}
	int y() const {
		return _y;
	}

	bool operator==(const Point &p) const {
		return _x == p._x && _y == p.y();
	}// methods can read private fields

	//	inline bool operator==(const X& lhs, const X& rhs){ /* do actual comparison */ }
	//	inline bool operator!=(const X& lhs, const X& rhs){return !operator==(lhs,rhs);}
	//	inline bool operator< (const X& lhs, const X& rhs){ /* do actual comparison */ }
	//	inline bool operator> (const X& lhs, const X& rhs){return  operator< (rhs,lhs);}
	//	inline bool operator<=(const X& lhs, const X& rhs){return !operator> (lhs,rhs);}
	//	inline bool operator>=(const X& lhs, const X& rhs){return !operator< (lhs,rhs);}


};

class ostream {
public:
	ostream& operator<<(char c);
	ostream& operator<<(unsigned char c);
	ostream& operator<<(int n);
	ostream& operator<<(unsigned int n);
	ostream& operator<<(long n);
	ostream& operator<<(float n);
	ostream& operator<<(double n);

//	ostream& operator<<(ostream &out, const string &s);
//
//	ostream& operator<<(ostream &out);

};

int main() {

	Point s(2, 6);
	Point d(4, 9);

	bool me = s.operator==(d);

	Date dd(1,1,1);

	//bool operator==(s);
	//bool b.operator==(a);
	//operator==(a,b);

	//bool operator==(const Fraction& lhs, const Fraction& rhs)


	cout << "check i: " << me << endl;
	dd.showDate();


	return 0;
}
