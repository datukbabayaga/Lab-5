// ConsoleApplication14.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;


int main()
{
	int x, y, z;

	string name;
	cout << "please enter your name :" << endl;

	cout << "please enter value of x :" << endl;
	cin >> x;
	cout << "please enter value of z :" << endl;
	cin >> z; 

	cout << "*******************" << endl;
	cout << "This is your name :" << endl << endl;
	cout << "*******************" << endl;

	if (x > 0 && z > 0)
		cout << "both number is posititf" << endl;

	else if (x > 0)
		cout << "number of x is porsitif" << endl;

	else
		cout << "number of y is positif" << endl;



    return 0;
}

