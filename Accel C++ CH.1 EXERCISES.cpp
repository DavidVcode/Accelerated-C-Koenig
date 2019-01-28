// Accel C++ CH.1 EXERCISES.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string> // IMPORTANT, IMPORTANT, IMPORTANT
					// YOU NEED TO INCLUDE THE HEADER FOR STRINGS OR THE PROGRAM WONT KNOW HOW TO COMPILE THEM (I'M ASSUMING)


using namespace std;


int main()
{
	

	cout << "What is your name? \n" << endl;
	string name;
	cin >> name;
	cout << "Hello," << name << endl;
	
	cout << "And what is your name? \n";
	cin >> name;
	cout << "My name is " << name << ", nice to meet you too!" << endl;

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

/*

1. Are the following definitions valid??
A. Yes they are, I tried em.

int main()
{
	string hello = "Hello";
	string message = hello + ", world" + "!";

	cout << message << endl;
}

2. Are The following definitions valid??
A. No it isn't because the string cannot have more than two literal string conjoined by operators ( I think)
int main()
{
	string exclam = "!";
	string message = "Hello" +  ", world" + exclam;


	cout << message << endl;
}

You can fix it by doing something like this I know:

int main()
{
	string exclam = "!";
	string comma = ",";
	string message = "Hello" + comma +  "world" + exclam;


	cout << message << endl;
}

3. Is this program valid??

int main()
{
	{const string s = "a string";   // suprisingly I thought that since two strings both ha variables with different definitions then it wouldn't work.
	cout << s << endl;				// However, I totally forgot that they are local variables and cease to exist outside their braces. So of course, you can have the same variable
	}								// as long as its in a different pair of brackes

	{const string s = "another string";    // Here is the other variable that I thought duplicated the first. The program works just fine when run.
	cout << s << endl;
	}

	return 0;
}

4. How about the same one with extra }}??
A. NO, it was fine before, and perfectly formatted. This just addes half a pair of braces and an extra semicolon for no reason. I'm pretty sure.

int main()
{
	{const string s = "a string";
	cout << s << endl;
	}

	{const string s = "another string";
	cout << s << endl; } ; 	}

	return 0;
}

5. Does it work and what does it do?
A. It doesn't because X is undefined and in order for it to be defined the braces need to be cleaned up. Just remove the inner pair.

int main()
{
	{string s = "a string";
	{string x = s + ", really";
	cout << s << endl; }
	cout << x << endl; }

	return 0;
}

6.




*/