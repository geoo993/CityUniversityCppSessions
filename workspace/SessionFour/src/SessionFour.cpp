//============================================================================
// Name        : SessionFour.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <ostream>
#include <string>
#include <vector>
#include <list>
#include <string>

using namespace std;

void swapInt(int & x, int & y) {
	int tmp = x;
	x = y;
	y = tmp;
}

void swapString(string & x, string & y) {
	string tmp = x;
	x = y;
	y = tmp;
}

template<typename T>
void swap(T & x, T & y) {
	T tmp = x;
	x = y;
	y = tmp;
}

template<typename Elem>
void swapElements(Elem & x, Elem & y) {
	Elem tmp = x;
	x = y;
	y = tmp;
}

void reverse(vector<int> & v) {
	int l = 0;
	int r = v.size() - 1;
	while (l < r) {
		swapInt(v[l], v[r]);
		++l; // prefer over l++
		--r; // prefer over r--
	}
}

template<typename Elem>
void reverseElement(vector<Elem> & v) {
	unsigned l = 0; // unsigned is better
	unsigned r = v.size() - 1; // unsigned is better
	while (l < r) {
		swapElements(v[l], v[r]);
		++l; // prefer over l++
		--r; // prefer over r--
	}
}

template<typename T> class list {
public:
	list();
	int size() const;
	void clear();
	const T & front() const ; // the Good
	T & front(); // & the Bad
	void push_front(const T & x);
	void pop_front();
	const T & back() const ; // the Good
	T & back(); // & the Bad
	void push_back(const T & x);
	void pop_back();
};

template<typename Item>
class stack {
	vector<Item> v;
public:
	bool empty() const {
		return v.size() == 0;
	}
	void push(const Item & x) {
		v.push_back(x);
	}
	Item & top() {
		return v.back();
	}
	void pop() {
		v.pop_back();
	}
	const Item & top() const {
		return v.back();
	}
};

//template <typename X>
//bool stack<X>::empty() const { return v.size() == 0; }
//
//template <typename Y>
//void stack<Y>::push(const Y & x) { v.push_back(x); }

//
//template<typename Item>
//class queue {
//	vector<Item> v;
//public:
//	bool empty() const {
//		return v.size() == 0;
//	}
//
//	unsigned int length() const { return v.size();}
//
//	void enqueue(const Item & x) { v.push_back(x); }
//
//	Item & front() { return v.front(); }
//	const Item & head() const {	return v.front();}
//
//	Item & tail() { return v.back(); }
//	const Item & tail() const { return v.back(); }
//
//};




class stats {
public:
	int num;
	int sum;
};

int main() {

	int a, b;
	swapInt(a, b); // T is int
	string s, t;
	swapString(s, t); // T is string

	vector<int> vi;
	vector<string> vs;

	reverseElement(vi); // Elem = int
	reverseElement(vs); // Elem = string
	//cout << vi << endl;
	//cout << vs << endl;

	//vector<vector<int> > vvi;
	//reverse(vvi); // Elem = vector<int>


	//	map <string, pair<int, int> > words;
	//	vector<string> keys;
	//
	//	string s;
	//	while (cin >> s){
	//		if (words.count(s) == 1)
	//	}
	//
	//	for(int i = 0; i< 5; i++){
	//		cout << i << endl;
	//	}


	int j;

	while (j < 10) {

		j++;
		cout << j << endl;
	}

	//	queue <int> si;
	//	list <int> li;
	//	vector<int> vi;
	//
	//	cout << li.front();
	//	li.pop_front();
	//
	//	si.queue(1);
	//	s2.queue(1);
	//	s3.queue(1);
	//
	//	while (! si.empty()){
	//		cout << si.front() << endl;
	//		si.dequeue();
	//	}


	return 0;
}
