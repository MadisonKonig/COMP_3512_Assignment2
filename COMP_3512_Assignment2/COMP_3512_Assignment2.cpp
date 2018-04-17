// COMP_3512_Assignment2.cpp : Defines the entry point for the console application.
//

#include <iostream>


int main()
{
	int running = 1;
	char choice;
	do {
		
		std::cin >> choice;
		std::cout << std::endl;
		choice = tolower(choice);
		switch (choice)
		{
		case 'a': 
			//run Add new Patient
			break;
		case 'b':
			//get next Patient
			break;
		case 'c':
			//change Patient category
			break;
		case 'd':
			//save Patient list
			break;
		case 'e':
			//load Patient list
			break;
		case 'f':
			//print Patient list
			break;
		case 'g': 
			running = 0;
		default:
			std::cout << "Error, wrong entry" << std::endl;
			break;
		}
	} while (running);
    return 0;
}

