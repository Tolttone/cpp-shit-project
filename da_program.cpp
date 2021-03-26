#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <sstream>
#include <cstdlib> 
#include <ctime> 
#include <stdlib.h>
using namespace std;


int main()
{
	string Array[10];
	
	ifstream inFile;
	
	
	inFile.open("F:\\Riot Games\\datafile.txt");           // Opens file
		
	if (!inFile) {
		cerr << "Unable to open file datafile.txt";
		exit(1);   // call system to stop           //Checks if the file can be opened
	}

	for (int i = 0; i < 10; ++i) {

		inFile >> Array[i];                  //File words into array
		
	}
	
	int i;
	srand((unsigned)time(0));          //Random number generator
	i = rand() % 10;
	
	string theWord = Array[i];
	string finishedWord = "_____";
	char letter;
	
	for (int x = 0; x < 10;) {
		
		cin >> letter;

		if (theWord.find(letter) != std::string::npos)         //Checks if the word has the user input character
		{
			int y = theWord.find_first_of(letter);
			finishedWord[y] = letter;
		}
		else
			x += 1;                 //If not adds 1 to x which is used for lives

		cout << finishedWord << " You have " << 10 - x << " lives left" << endl;
		if (finishedWord == theWord) {                                   // If the word is correct it ends the loop
			cout << " Congratulations you guessed the word right!";
			break;
	}
		
	}
	
	
		
		
	return 0;
}
