#include <iostream>
#include <string>
using namespace std;




int main()
{
	//declare some pointers
	int *p, *q;
	string *sName;

	//the "new" operator does two things:
	//1. Allocates memory for a certain dataType
	//2. returns the memory address for that allocated memory

	//use "new" to create some dynamic variables
	p = new int;
	q = new int;
	sName = new string;

	//when working with dynamic variables (storing/accessing)
	//you must use the * (dereference operator)
	*p = 5;
	*q = 16;
	*sName = "Tyler Timmins";

	//display the memory address of p, q, and sName
	cout << "p = " << p << endl;
	cout << "q = " << q << endl;
	cout << "sName = " << sName << endl << endl;

	//display the values stored of dynamic variables p, q, and sName
	cout << "*p = " << *p << endl;
	cout << "*q = " << *q << endl;
	cout << "*sName = " << *sName << endl << endl;

	//we can use dynamic variables in arithmetic or
	//relational expressions just like regular variables
	cout << "*p * *q = " << (*p * *q) << endl;
	cout << "*p + *q = " << (*p + *q) << endl;

	//compare
	if (*p > *q)
		cout << *p << " is greater than " << *q << endl << endl;
	else
		cout << *p << " is less than " << *q << endl << endl;

	//prevent memory leaks by deallocating memory that
	//we allocated while the program was executing
	delete p;
	delete q;
	delete sName;

	//also clear out the memory address that the pointers were storing
	p = NULL;
	q = NULL;
	sName = NULL;

	return 0;
}