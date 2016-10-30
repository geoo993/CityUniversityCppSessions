//============================================================================
// Name        : SessionOne.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

void f(int i) {
	i = i + 5;
}
void g1() {
	int j = 3;
	f(j); // no effect on j
}

int last(vector<int> &v) {
	return v[v.size() - 1];
}
void g2() {
	vector<int> x(100);
	int n = last(x); // don’t copy x
}

void f1(int &i) {
	i = i + 5;
}
void g3() {
	int j = 3;
	f1(j); // j is updated
}

int last(const vector<int> &v) {
	return v[v.size() - 1];
}
void g4() {
	vector<int> x(100);

	int n = last(x); // don’t copy x
}

const int days_per_week = 7;
enum class traffic_light {
	red, yellow, green
};
traffic_light r = traffic_light::yellow;
enum class colour_rgb {
	red, green, blue
};
colour_rgb red = colour_rgb::red;

//istream& getline(istream& in, string &s) {
//	s.erase();
//	char c;
//	while (in.get(c) && c != "\n")
//		s += c;
//	return in;
//}

int main() {

	int x;
	int &y = x; // there’s only one int here


	cout << "Hi";
	cout.flush();

	cout << "Hi Boys" << flush;

	cout << "Hello, how are you?\n" // no printing yet
			<< "How could I be of assistance?" << endl; // Add a new line & flush everything


	//	int i;
	//	cout << "Type a number: ";
	//	cin >> i;
	//	cout << i << " times 3 is " << (i*3) << "\n";
	//
	//
	//	string s;
	//	while (cin >> s)
	//	cout << s << "\n";


	vector<int> vi(5); // vector of 5 ints
	vector < string > si; // empty vector of strin
	vi[1] = 5;
	vi[2] = vi[1] + 3;
	si.push_back("sde");
	cout << si.size() << endl;

	return 0;
}
