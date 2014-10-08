#include <iostream>
#include <string>
#include "menu.h"
using namespace std;

void menuController()
{
	int choice = displayMainMenu();

	switch (choice)
	{
		case 0:
			break;
		case 1:
			displayFiles();
			break;
		case 2:
			displayCalculate();
			break;
		case 3:
			displayResults();
			break;
		case 4:
			displayProb();
			break;
		default:
			cout << "error, try again" << endl;
			break;
	}

}

int displayMainMenu() // make tiered, move to own class
{
	//read in file
	//exit
	//calculate for cat #
	//print for cat #
	//print all points
	//print results to file
	//probabilities of codependence

	int choice;

	cout << "==========MAIN MENU==========" << endl;
	cout << "[1] Files" << endl;
	cout << "[2] Calculate" << endl;
	cout << "[3] Results" << endl;
	cout << "[4] Codependence" << endl;
	cout << "[0] Quit" << endl;
	cout << "Choice: ";
	cin >> choice;
	
	return choice;
}

void displayFiles()
{

}

void displayCalculate()
{

}

void displayResults()
{
	cout << "==========RESULTS MENU==========" << endl;
	cout << "[1] Display All Data" << endl;
	cout << "[2] Display All Data and Results" << endl;
	cout << "[3] Display One Category and Results" << endl;
	cout << "[0] Return to Main Menu" << endl;
}

void displayProb()
{

}

string samysGetLine() // redefines getLine to use alongside cin
{
	string s1, s2, total;
	cin >> s1;
	cin >> s2;
	total = s1 + " " + s2;
	return total;
}