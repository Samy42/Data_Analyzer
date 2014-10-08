#include <iostream>
#include <string>
#include "menu.h"
#include "Calculations.h"
#include "CategoryType.h"
#include "PointType.h"
#include "NelsonRules.h"
using namespace std;

void calculateCount(Category* category, Point* head)
{
	Point* current = head;

	while (current != NULL)
	{
		category->count++;

		current = current->next;
	}
}

void calculateTotal(Category* category, Point* head)
{
	Point* current = head;

	while (current != NULL)
	{
		category->count++;

		if (category->number == 1)
			category->total += current->cat1;
		else if (category->number == 2)
			category->total += current->cat2;
		else if (category->number == 3)
			category->total += current->cat3;
		else if (category->number == 4)
			category->total += current->cat4;
		else if (category->number == 5)
			category->total += current->cat5;
		else
			cout << "Error, invalid category num" << endl;

		current = current->next;
	}
}

void calculateMean(Category* category)
{
	category->mean = category->total / category->count;
}

void calculateStdDev(Category* category, Point* head)
{
	Point* current = head;

	double tempSum = 0.0;

	while (current != NULL)
	{
		if (category->number == 1)
			tempSum += pow((category->mean - current->cat1), 2);
		else if (category->number == 2)
			tempSum += pow((category->mean - current->cat2), 2);
		else if (category->number == 3)
			tempSum += pow((category->mean - current->cat3), 2);
		else if (category->number == 4)
			tempSum += pow((category->mean - current->cat4), 2);
		else if (category->number == 5)
			tempSum += pow((category->mean - current->cat5), 2);
		else
			cout << "Error, invalid category num" << endl;
	}

	category->standardDeviation = sqrt(tempSum / (category->count - 1));
}

void checkPointsByCategory(Point* head, Category* category)
{
	Point* current = head;
	double stddev = category->standardDeviation;
	double mean = category->mean;

	//using Nelson rules to detect out-of-control points

		//one point more than 3stddev from mean
		NelsonRuleOne(head, category);

		// 9 or more points in a row on same side of the mean
		NelsonRuleTwo(head, category);

		//6 or more points in a row continually increasing or decreasing
		NelsonRuleThree(head, category);

		//14 or more points alternating in direction (increasing then decreasing)
		NelsonRuleFour(head, category);

		//2 out of 3 points in a row more than 2 stddev from mean
		NelsonRuleFive(head, category);

		//4 out of 5 points in a row are more than 1 standard deviation from the mean in same direction
		NelsonRuleSix(head, category);

		//15 points in a row are all within 1 stddev of the mean
		NelsonRuleSeven(head, category);

		//8 points in a row exist with none within 1stddev of the mean and points are in both directions from the mean
		NelsonRuleEight(head, category);
}

void checkAllPoints(Point* head)
{
	//call checkPointsByCategory for each category
}