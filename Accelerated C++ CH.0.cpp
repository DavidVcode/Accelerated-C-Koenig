// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

// you can make comments by doing a "//". These comment sysntax markers are good for one line

/* <<You can also make a comment by doing this




   together with this (lasts for as many lines as you wnat) >> */ 

/* This is the first Application of "Accelerated C++, Practical Programming by Example with Andrew Koenig

IMPORTANT: WE ARE ADDING ANY DEFINITIONS FOUND IN THE BOOK HERE FOR EASY VIEWING!!

Here in the first chapter we cover some basic definitions that tell us how the library (the repository of logical rules for computing, classifying, and defining the code written) interprets some
of the most basic code you can write. Below you'll find exactly what they are:

1. "#include '<directive>'" - "Include" basically says were going to use a specific part of the standard library. It could be a mathematics portion. It could a input-output portion. It depends 
							on what type of functions your program needs. Goes typically at the beginning of the program.

2. "{  } " -	Curly braces. These group functions into a cohesive unit called a BLOCK. One set of curly braces, one unit. You can include curly braces inside of curly braces. As long as each set is complete,
				curly braces can be used to put more functions inside other functions. They execute in order of appearance.

3. "std" -		Abbreviation of Standard. std is a namespace which essentially is a specific group of functions in the library. The name standard gives away what the std namespace might be. It is the default
				group of functions for the C++ library. Iif you were to go to an art store and ask for a  drawing kit, it would probably include things like pencils, erasers, paper, straight edge, graphite
				charcoal, ink, etc. All the things someone might need to draw with, so too does the standard namespace include similar basic functions for developers in C++.

3.1 Namespaces - Mechanism for grouping related names.

4. Expressions - Expressions ask the implementation to COMPUTE something. The computations yields results, typically in the format of whatever type of variable your program is using. Besides results
				expressions also can yield side effects, like a string of text.

				OPERATORS AND OPERANDS: IMPORTANT ABOUT EXPRESSIONS:
				
				Expression contain OPERATORS and OPERANDS
				"<<" and ">>" are examples  of OPERATORS
				"std::cout", "Hello, World!", and "std::endl" are OPERANDS
				Operators and Operands define you're expressions (functions really) and color how they express themselves

				An EXPRESSION Followed by a ";" is called a EXPRESSION STATEMENT which is a request to execute the statement for its side effects and not its results. This results in a null statement. 
				
5. Types -		Now every OPERAND has a type. Like water type, fire type, number-type, bad-boy type. Essentially the type denotes the data structure its compatible with and obviously, what it makes
				sense to use it with. These types have names too. One such real "number-type" I jokingly used earlier would be "int". "Int" is short for integer. Another such would be "std::ostream" type
				for something like the OPERAND "std::cout". The effect of an OPERATOR depends on the type of its OPERANDS.
				
				Types are generally considered in two camps: those built into the core of the language like "int" and those defined outside the core language like "std::cout".

5. ";" -		Semicolons. These punctuate the end of a line of code.  These are the bane of your existence if you forget to put them in. However, Visual Studio will tell you if and where you are missing
				a semicolon. Programs will not function correctly if you do not punctuate with this syntax properly. Get in a good habit of putting them in.

6. Scopes -		Scopes are the general purview of a particular or group of particular names/namespaces. You can tell the SCOPE of an OPERAND by looking at it. For example: "std::cout". "cout" is the statment,
				"::" is the SCOPE OPERATOR, and then "std" is the SCOPE. All together it reads right to left "cout which belongs to a namespace of the scope std"

7. String Literals - Begin and end with (" "). Must appear entirely on one line of the program. Have special meaning when preceded by backslash "\".

					\n newline character
					\t tab character
					\b backspace character
					\ " treats this symbol as part of a string rather than as the string terminator
					\ ' same meaning as ' in string literals, for consistency with charater literals
					\\ includes a \ in the string, treating the next character as an ordinary character

7.1 String Types - DEfined by the header <string>. Contains a sequence of zero or more characters.
					Strings can contain variables that have string literals but remember they are no the same.
					
					string hello = 12345, means where ever "hello" goes, 12345 will be used as its value.
					string employee, means the variable is defined but unitialized yet.
					


8. Definitions and Headers - Names that must be defined before they are used such as headers "<iostream>" or "<cmath>"

9. Main function - EVery program has one to start with. says "int main()" usually. The implementation runs the program by calling "main". just FYI, at this time I don't know what implmenation means.
					Just that by implementation I'm guessing they are referring to some higher level application up the code somewhere. 0 indicates success. 1 indicates failure.

					FUNCTIONS are supposed to include at least one return statement. The MAIN FUNCTION is special in that it may omit a return statement and the receiving implementation may assume a 
					return value of zero(success). This can lead to trouble so explicitly stating the return is a good practice

10. Variable - Variables are objects that have a name.

10.1 Local Variable - Are variables that exist only while the part of the block of the program they exist in, is executing. The implementation destroys the variable once
	the block reaches its brackets, which frees up additional memory for the program to use.

11. Object - Objects are part of a computers memory that have a type.

12. Definition - Defines a variable.

13. Interface - the collection of operations that are possible on an object of that type

14. Initialization - Every variable has should be inintialized, given a value of some kind. If the variable is not initialized, then it has an "empty" or "null" value.

15. Buffer - An internal data structure that can be used top optimize output operations.

16. Flushing - Writing out the contents of the buffer to the output device. Done only when necessary. This is done so several output actions be performed in a single write

		Events leading to buffer flush:
			1. Full Buffer
			2. Library might be asked to read from the standard input stream which it will flush and wait for whatever the standard input stream says
			3. When we excplicitly tellt the buffer to so

			Timing a buffer flush at the right moments can help output that languishes in the system's buffer for a long time before it actually gets written so
			you see it.

17. Concatenate - add to strings together using "+". This example is found on pg 13.
			
			Operators that have different meanings for operands of different types are reffered to as OVERLOADED

18. const - const is an option to define a variable as unchanging in a program during its lifetime.

19. Member Function - a component of a function that also has its own function
			e.g. string greeting
					string greeting.size()
					// size being the compnent function which yields an integer that represent the number of characters in "greeting"

20. Character literals - Always enclosed in single quotes ' '. Distinct from string literals which are enclosed in double quotes " ".
						Precede a character by \ and enclose the character with the single quotes, and you have a character which will be taken literally

						Char - This is a type that holds  ordinary characters in any implementation
						wchar_t - This is a type that holds wide characters for other languages and such (Japanese)


*/


int main()
{
	std::cout << "Hello world!" << std::endl;


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
