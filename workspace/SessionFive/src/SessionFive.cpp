//============================================================================
// Name        : SessionFive.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include <iostream>
#include <vector>
#include <list>
#include <forward_list>
using namespace std;

template <typename T>
void print_vec_index( const vector<T> & v ) {
  cout << '<';
  for (int sz = v.size(), i = 0; i < sz; ++i)
    cout << ' ' << v[i];
  cout << " >";
}

template <typename T>
void print_vec_iterator1( const vector<T> & v ) { // Old C++
  cout << '<';
    // UNCOMMENT the different for loops to see the errors you get.
  // WRONG: Need typename before template type since vector<T> doesn't exist!!!
  // for (vector<T>::const_iterator i = begin(v); i != end(v); ++i)
  // WRONG: Need a constant iterator, as v is a const reference
  // for (typename vector<T>::iterator i = begin(v); i != end(v); ++i)
  for (typename vector<T>::const_iterator i = begin(v); i != end(v); ++i)
    cout << ' ' << *i;
  cout << " >";
}


template <typename T>
void print_vec_iterator2( const vector<T> & v ) { // New C++ (C++11)
  cout << '<';
  for (auto i = begin(v); i != end(v); ++i)
    cout << ' ' << *i;
  cout << " >";
}


int main() {



	int i = 3;
	int j = 4;


	int &ref = i;
	int *pointer = &j; //reference is needed to refer to an Int, which in this case is reference to j




	cout << "Ref: " << ref << endl;
	cout << "Pointer: " << *pointer << endl;// pointer
	cout << "Pointer Address: " << pointer << endl;//address of pointer

	*pointer = *pointer + 50;
	cout << "Pointer: " << *pointer << endl;//address of pointer


	int arr[40];
	int *p = arr;
	cout << "Array: " << arr << endl;//address of array
	cout << "Array Pointer: " << *p << endl;// array pointer

	arr[0] = arr[0] + 8;

	cout << "Array with first value: " << arr[0] << endl;//first element in array

	*p = *p + 8;
	cout << "Array Pointer first value: " << arr[0] << endl;//first element in array pointer




	int arrr[] = { 1,2,3,4,5};
	int *pp = arrr;

	cout << "arrr == " << arrr[2] << endl;
	cout << "2[arr] == " << 2[arrr] << endl;
	cout << "pp == " << pp[2] << endl;
	cout << "2[pp] == " << 2[pp] << endl;
	cout << "pp + 2 == " << ( pp + 2 )<< endl;
	cout << "arrr + 2 == " << ( arrr + 2 )<< endl;
	cout << "*( arrr + 2 ) == " << *( arrr + 2 )<< endl;


	 vector<int> vi;
	 vi.push_back(1);
	 vi.push_back(2);
	 vi.push_back(3);
	 print_vec_index(vi); cout << endl;
	 print_vec_iterator1(vi); cout << endl;
	 print_vec_iterator2(vi); cout << endl;

	 forward_list<int> li;
	 li.push_front(4);
	 li.push_front(5);
	 li.push_front(6);


	return 0;

}




