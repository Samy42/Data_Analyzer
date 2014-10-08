//includes and declarations

//read in file

//date/timeID for header; baseline if baseline; cat1;cat2;cat3;cat4;cat5//

//use linked lists - one node per time thing with all cat data in the node. can then look at multiple factors

//need UI menu for category use, baseline use, and which ones to print

// replace printed category numbers with user-entered strings using function

#include <iostream>
#include <string>
#include "CategoryType.h"
#include "PointType.h"
using namespace std;

int main()
{
	
}

void displayAll(Point* head)
{
	Point* current = head;
	while (current != NULL)
	{
		current->display();
		current = current->next;
	}
	cout << "======================" << endl;
}

void displayCategory(Category* category, Point* head)
{
	Point* current = head;

	cout << "Displaying all Points in Category " << category << endl;

	while (current != NULL)
	{
		cout << current->time << " ";
		if (category->number == 1)
		{
			cout << current->cat1 << " " << current->outCat1 << endl;
		}
		else if (category->number == 2)
		{
			cout << current->cat2 << " " << current->outCat2 << endl;
		}
		else if (category->number == 3)
		{
			cout << current->cat3 << " " << current->outCat3 << endl;
		}
		else if (category->number == 4)
		{
			cout << current->cat4 << " " << current->outCat4 << endl;
		}
		else if (category->number == 5)
		{
			cout << current->cat5 << " " << current->outCat5 << endl;
		}
		else
			cout << "error" << endl;
		current = current->next;
	}
	cout << "======================" << endl;
}