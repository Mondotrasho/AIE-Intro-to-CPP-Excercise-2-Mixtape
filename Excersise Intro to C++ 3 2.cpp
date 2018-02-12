#include <iostream>

int main() //begining bit
{

	std::cout << "Hello AIE" << std::endl << "Delta" << std::endl << "Scopie" << std::endl << "Fever" << std::endl << "La de da de da de da de day oh" << std::endl;

	//trying to simpify the number bit so it prints the numbers from 0-5 then back again using code from the Programming tutorial Part 2.0 project

	int EndNum = 0;
	int count = 0;

	//Used to std::cout 0 here but realised if I placed the std:cout in the loop before I added to EndNum I could post the value of EndNum as its initialised at

	while (count < 6) { //needs to do this six times as 0-5 is six numbers duh
		std::cout << EndNum << std::endl; 
		EndNum += 1;
		count += 1;
	}

	EndNum = 5; //accounts for the extra 1 added to EndNum last time it popped up by re initialising it as 5 (not really reinitialised but eh)

	while (count < 12) {
		std::cout << EndNum << std::endl;
		EndNum -= 1;
		count += 1;
	}

	system("pause"); //Stop terminal from closing at end

	return 0; //end bit
}

