//============================================================================
// Name        : SessionEight.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void foo(){

	static int i = 0;// global variable, when you use static
	i ++;
	cout << i << endl;

}

int main() {

	foo();
	foo();
	foo();
	foo();

	return 0;
}
