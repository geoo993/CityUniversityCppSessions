//============================================================================
// Name        : SessionThree.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <ostream>

using namespace std;
//using namespace std::rel_ops;


void fd(double x) {
}
void fi(int n) {
}

void fid(int i, double y) {
}
void fdi(double x, int j) {
}

void fii(int i, int j) {
}

class point {
	int _x, _y;
public:

	point() :
		_x(0), _y(0) {
	}
	;
	point(int x, int y) :
		_x(x), _y(y) {
	}
	int x() const {
		return _x;
	}
	int y() const {
		return _y;
	}

	bool operator==(const point &p) const {
		return _x == p._x && _y == p.y();
	}// methods can read private fields

	//	bool operator==(const point &p1, const point &p2){
	//		return p1.x() == p2.x() && p1.y() == p2.y();
	//	}


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
	//ostream& operator<<(ostream &out, const string &s);
	ostream& operator<<(ostream &out);

	//	ostream& operator<<(ostream &s, const point &p) {
	//		return s << "(" << p.x() << "," << p.y() << ")";
	//	}

	//	ostream& print_on(ostream &s) {
	//		return s << "(" << _x << "," << _y << ")";
	//	}


};

class istream: virtual public ios {
public:
	istream& operator>>(char &c);
	istream& operator>>(unsigned char &c);
	istream& operator>>(int &n);
	istream& operator>>(unsigned int &n);
	istream& operator>>(long &n);
	istream& operator>>(float &n);
	istream& operator>>(double &n);

};

//istream& operator>>(istream &s, point &p) {
//	int x, y;
//	char lpar, comma, rpar;
//	if (s >> lpar) { //met EOF (End Of File)
//		if ((s >> x >> comma >> y >> rpar) &&
//(lpar == Õ(Õ && comma == Õ,Õ && rpar == Õ)Õ))
//			p = point(x, y); // constructor, not setters!
//		else
//			s.setstate(ios::badbit); //read failed
//	}
//	return s;
//}

int a, b, c, d;

int main() {

	fd(double(1));// being explicit
	fid(1, 2); // ambiguous!
	fdi(1, 2); // ambiguous!
	fii(1, 2); // best match

	fid(int(1), double(2));// do this to be explicit


	int i;
	if (i == 3) // [*]
	{
	}
	string s1, s2;
	if (s1 == s2) {

	}//The == operator is overloaded:

	//	point p1, p2;
	//	if (p1 == p2)
	//	if (p1 == point(0, 0)) // temporary object
	//
	//
	//	//int e = a + b + c * d;
	//	int f = (a + b) + (c * d);
	//
	//	//cout << e << endl;
	//	cout << f << endl;

	//	a != b;
	//	!(a == b);
	//	a > b;
	//	b < a;
	//	a <= b;
	//	!(b < a);
	//	a >= b;
	//	!(a < b);

	//point p(2, 3);
	//cout << "The point is " << p << Õ\nÕ;

	return 0;
}
