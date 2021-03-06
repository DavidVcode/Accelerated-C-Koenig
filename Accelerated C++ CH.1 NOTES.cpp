// Accelerated C++ CH.1 NOTES.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>



using namespace std;

//in the program will make a program that can say hi to someone with a name

int main()
{
	cout << "Who are you?" << endl;

	string name;
	cin >> name;
	
		cout << "Hello, " << name << "!" << endl;

		const string greeting = "Hello, " + name + "!";  //all const means is that we have defined the variable as constant; it doesn't changed while its alive.
		const string spaces(greeting.size(), ' ');	// greeting.size() the .size is a component function of the large greeting.size function. .size simply will perform an auxillary function in accordance with the its type and purpose
		const string second = "* " + spaces + "* ";
		const string first(second.size(), '*');
		const string stars(15, '$');


		/*Okay so I think I figured this one out. When you run the program and you get your greeting after you put your name in, you'll see five or six lines
		lines. Notice that we have 5 or six lines of cout below. Not a coincidence. We're creating the square shape by defining the lines using cout and by also
		using defined string variables to create the spacing and "decorations" needed to create the fancy border*/


		cout << stars << endl;

		cout << endl;	//Intentional blank space to create a break				
		cout << first << endl; //Use of the variable "first" which are *'s that span the size of the "second" variable. 
		cout << second << endl; //The second variable is a pair of *'s on each side of the variable "spaces"
		cout << "* " << greeting << " *" << endl; // The greeting variable here surrounded by two asterisks on each side is the premise of the program which 
												  //actually greets you by name. The length of this variable sets the length of the other variables
		cout << second << endl; //Use of the "second" variable to mirror the top portion of the formal greeting
		cout << first << endl; //USe of the "first" variable to mirror the bottom portion of the formal greeting

		cout << stars << "\n" << endl;

		return 0;


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
