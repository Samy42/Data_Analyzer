#include <iostream>
#include <string>
#include "menu.h"
#include "Calculations.h"
#include "CategoryType.h"
#include "PointType.h"
#include "NelsonRules.h"
using namespace std;

void NelsonRuleOne(Point* head, Category* category)
{
	//one point more than 3stddev from mean

	Point* current = head;
	double stddev = category->standardDeviation;
	double mean = category->mean;

	while (current != NULL)
	{
		switch (category->number)
		{
		case 1:
			if (current->cat1 > mean + stddev * 3 || current->cat1 < mean - stddev * 3)
			{
				current->outCat1 = 1;
			}
			break;
		case 2:
			if (current->cat2 > mean + stddev * 3 || current->cat2 < mean - stddev * 3)
			{
				current->outCat2 = 1;
			}
			break;
		case 3:
			if (current->cat3 > mean + stddev * 3 || current->cat3 < mean - stddev * 3)
			{
				current->outCat3 = 1;
			}
			break;
		case 4:
			if (current->cat4 > mean + stddev * 3 || current->cat4 < mean - stddev * 3)
			{
				current->outCat4 = 1;
			}
			break;
		case 5:
			if (current->cat5 > mean + stddev * 3 || current->cat5 < mean - stddev * 3)
			{
				current->outCat5 = 1;
			}
			break;
		default:
			break;
		}
		current = current->next;
	}
}

void NelsonRuleTwo(Point* head, Category* category)
{
	Point* current = head;
	double stddev = category->standardDeviation;
	double mean = category->mean;

	// 9 or more points in a row on same side of the mean (positive)
	while (current->next->next->next->next->next->next->next->next != NULL)
	{
		switch (category->number)
		{
		case 1:
			if (current->cat1 > mean && current->next->cat1 >mean && current->next->next->cat1 > mean && current->next->next->next->cat1 > mean && current->next->next->next->next->cat1 > mean && current->next->next->next->next->next->cat1 > mean && current->next->next->next->next->next->next->cat1 > mean && current->next->next->next->next->next->next->next->cat1 > mean && current->next->next->next->next->next->next->next->next->cat1 > mean)
			{
				current->outCat1 = 1;
				current->next->outCat1 = 1;
				current->next->next->outCat1 = 1;
				current->next->next->next->outCat1 = 1;
				current->next->next->next->next->outCat1 = 1;
				current->next->next->next->next->next->outCat1 = 1;
				current->next->next->next->next->next->next->outCat1 = 1;
				current->next->next->next->next->next->next->next->outCat1 = 1;
				current->next->next->next->next->next->next->next->next->outCat1 = 1;
			}
			break;
		case 2:
			if (current->cat2 > mean && current->next->cat2 >mean && current->next->next->cat2 > mean && current->next->next->next->cat2 > mean && current->next->next->next->next->cat2 > mean && current->next->next->next->next->next->cat2 > mean && current->next->next->next->next->next->next->cat2 > mean && current->next->next->next->next->next->next->next->cat2 > mean && current->next->next->next->next->next->next->next->next->cat2 > mean)
			{
				current->outCat2 = 1;
				current->next->outCat2 = 1;
				current->next->next->outCat2 = 1;
				current->next->next->next->outCat2 = 1;
				current->next->next->next->next->outCat2 = 1;
				current->next->next->next->next->next->outCat2 = 1;
				current->next->next->next->next->next->next->outCat2 = 1;
				current->next->next->next->next->next->next->next->outCat2 = 1;
				current->next->next->next->next->next->next->next->next->outCat2 = 1;
			}
			break;
		case 3:
			if (current->cat3 > mean && current->next->cat3 >mean && current->next->next->cat3 > mean && current->next->next->next->cat3 > mean && current->next->next->next->next->cat3 > mean && current->next->next->next->next->next->cat3 > mean && current->next->next->next->next->next->next->cat3 > mean && current->next->next->next->next->next->next->next->cat3 > mean && current->next->next->next->next->next->next->next->next->cat3 > mean)
			{
				current->outCat3 = 1;
				current->next->outCat3 = 1;
				current->next->next->outCat3 = 1;
				current->next->next->next->outCat3 = 1;
				current->next->next->next->next->outCat3 = 1;
				current->next->next->next->next->next->outCat3 = 1;
				current->next->next->next->next->next->next->outCat3 = 1;
				current->next->next->next->next->next->next->next->outCat3 = 1;
				current->next->next->next->next->next->next->next->next->outCat3 = 1;
			}
			break;
		case 4:
			if (current->cat4 > mean && current->next->cat4 >mean && current->next->next->cat4 > mean && current->next->next->next->cat4 > mean && current->next->next->next->next->cat4 > mean && current->next->next->next->next->next->cat4 > mean && current->next->next->next->next->next->next->cat4 > mean && current->next->next->next->next->next->next->next->cat4 > mean && current->next->next->next->next->next->next->next->next->cat4 > mean)
			{
				current->outCat4 = 1;
				current->next->outCat4 = 1;
				current->next->next->outCat4 = 1;
				current->next->next->next->outCat4 = 1;
				current->next->next->next->next->outCat4 = 1;
				current->next->next->next->next->next->outCat4 = 1;
				current->next->next->next->next->next->next->outCat4 = 1;
				current->next->next->next->next->next->next->next->outCat4 = 1;
				current->next->next->next->next->next->next->next->next->outCat4 = 1;
			}
			break;
		case 5:
			if (current->cat5 > mean && current->next->cat5 >mean && current->next->next->cat5 > mean && current->next->next->next->cat5 > mean && current->next->next->next->next->cat5 > mean && current->next->next->next->next->next->cat5 > mean && current->next->next->next->next->next->next->cat5 > mean && current->next->next->next->next->next->next->next->cat5 > mean && current->next->next->next->next->next->next->next->next->cat5 > mean)
			{
				current->outCat5 = 1;
				current->next->outCat5 = 1;
				current->next->next->outCat5 = 1;
				current->next->next->next->outCat5 = 1;
				current->next->next->next->next->outCat5 = 1;
				current->next->next->next->next->next->outCat5 = 1;
				current->next->next->next->next->next->next->outCat5 = 1;
				current->next->next->next->next->next->next->next->outCat5 = 1;
				current->next->next->next->next->next->next->next->next->outCat5 = 1;
			}
			break;
		default:
			break;
		}
		current = current->next;
	}

	current = head; // reset current back to head for 2nd iteration

	// 9 or more points in a row on same side of the mean (negative)
	while (current->next->next->next->next->next->next->next->next != NULL)
	{
		switch (category->number)
		{
		case 1:
			if (current->cat1 < mean && current->next->cat1 < mean && current->next->next->cat1 < mean && current->next->next->next->cat1 < mean && current->next->next->next->next->cat1 < mean && current->next->next->next->next->next->cat1 < mean && current->next->next->next->next->next->next->cat1 < mean && current->next->next->next->next->next->next->next->cat1 < mean && current->next->next->next->next->next->next->next->next->cat1 < mean)
			{
				current->outCat1 = 1;
				current->next->outCat1 = 1;
				current->next->next->outCat1 = 1;
				current->next->next->next->outCat1 = 1;
				current->next->next->next->next->outCat1 = 1;
				current->next->next->next->next->next->outCat1 = 1;
				current->next->next->next->next->next->next->outCat1 = 1;
				current->next->next->next->next->next->next->next->outCat1 = 1;
				current->next->next->next->next->next->next->next->next->outCat1 = 1;
			}
			break;
		case 2:
			if (current->cat2 < mean && current->next->cat2 < mean && current->next->next->cat2 < mean && current->next->next->next->cat2 < mean && current->next->next->next->next->cat2 < mean && current->next->next->next->next->next->cat2 < mean && current->next->next->next->next->next->next->cat2 < mean && current->next->next->next->next->next->next->next->cat2 < mean && current->next->next->next->next->next->next->next->next->cat2 < mean)
			{
				current->outCat2 = 1;
				current->next->outCat2 = 1;
				current->next->next->outCat2 = 1;
				current->next->next->next->outCat2 = 1;
				current->next->next->next->next->outCat2 = 1;
				current->next->next->next->next->next->outCat2 = 1;
				current->next->next->next->next->next->next->outCat2 = 1;
				current->next->next->next->next->next->next->next->outCat2 = 1;
				current->next->next->next->next->next->next->next->next->outCat2 = 1;
			}
			break;
		case 3:
			if (current->cat3 < mean && current->next->cat3 < mean && current->next->next->cat3 < mean && current->next->next->next->cat3 < mean && current->next->next->next->next->cat3 < mean && current->next->next->next->next->next->cat3 < mean && current->next->next->next->next->next->next->cat3 < mean && current->next->next->next->next->next->next->next->cat3 < mean && current->next->next->next->next->next->next->next->next->cat3 < mean)
			{
				current->outCat3 = 1;
				current->next->outCat3 = 1;
				current->next->next->outCat3 = 1;
				current->next->next->next->outCat3 = 1;
				current->next->next->next->next->outCat3 = 1;
				current->next->next->next->next->next->outCat3 = 1;
				current->next->next->next->next->next->next->outCat3 = 1;
				current->next->next->next->next->next->next->next->outCat3 = 1;
				current->next->next->next->next->next->next->next->next->outCat3 = 1;
			}
			break;
		case 4:
			if (current->cat4 < mean && current->next->cat4 < mean && current->next->next->cat4 < mean && current->next->next->next->cat4 < mean && current->next->next->next->next->cat4 < mean && current->next->next->next->next->next->cat4 < mean && current->next->next->next->next->next->next->cat4 < mean && current->next->next->next->next->next->next->next->cat4 < mean && current->next->next->next->next->next->next->next->next->cat4 < mean)
			{
				current->outCat4 = 1;
				current->next->outCat4 = 1;
				current->next->next->outCat4 = 1;
				current->next->next->next->outCat4 = 1;
				current->next->next->next->next->outCat4 = 1;
				current->next->next->next->next->next->outCat4 = 1;
				current->next->next->next->next->next->next->outCat4 = 1;
				current->next->next->next->next->next->next->next->outCat4 = 1;
				current->next->next->next->next->next->next->next->next->outCat4 = 1;
			}
			break;
		case 5:
			if (current->cat5 < mean && current->next->cat5 < mean && current->next->next->cat5 < mean && current->next->next->next->cat5 < mean && current->next->next->next->next->cat5 < mean && current->next->next->next->next->next->cat5 < mean && current->next->next->next->next->next->next->cat5 < mean && current->next->next->next->next->next->next->next->cat5 < mean && current->next->next->next->next->next->next->next->next->cat5 < mean)
			{
				current->outCat5 = 1;
				current->next->outCat5 = 1;
				current->next->next->outCat5 = 1;
				current->next->next->next->outCat5 = 1;
				current->next->next->next->next->outCat5 = 1;
				current->next->next->next->next->next->outCat5 = 1;
				current->next->next->next->next->next->next->outCat5 = 1;
				current->next->next->next->next->next->next->next->outCat5 = 1;
				current->next->next->next->next->next->next->next->next->outCat5 = 1;
			}
			break;
		default:
			break;
		}
		current = current->next;
	}
}

void NelsonRuleThree(Point* head, Category* category)
{
	Point* current = head;

	//6 or more points in a row increasing 
	while (current->next->next->next->next->next != NULL)
	{
		switch (category->number)
		{
		case 1:
			if (current->cat1 < current->next->cat1 && current->next->cat1 < current->next->next->cat1 && current->next->next->cat1 < current->next->next->next->cat1 && current->next->next->next->cat1 < current->next->next->next->next->cat1 && current->next->next->next->next->cat1 < current->next->next->next->next->next->cat1)
			{
				current->outCat1 = 1;
				current->next->outCat1 = 1;
				current->next->next->outCat1 = 1;
				current->next->next->next->outCat1 = 1;
				current->next->next->next->next->outCat1 = 1;
				current->next->next->next->next->next->outCat1 = 1;
			}
			break;
		case 2:
			if (current->cat2 < current->next->cat2 && current->next->cat2 < current->next->next->cat2 && current->next->next->cat2 < current->next->next->next->cat2 && current->next->next->next->cat2 < current->next->next->next->next->cat2 && current->next->next->next->next->cat2 < current->next->next->next->next->next->cat2)
			{
				current->outCat2 = 1;
				current->next->outCat2 = 1;
				current->next->next->outCat2 = 1;
				current->next->next->next->outCat2 = 1;
				current->next->next->next->next->outCat2 = 1;
				current->next->next->next->next->next->outCat2 = 1;
			}
			break;
		case 3:
			if (current->cat3 < current->next->cat3 && current->next->cat3 < current->next->next->cat3 && current->next->next->cat3 < current->next->next->next->cat3 && current->next->next->next->cat3 < current->next->next->next->next->cat3 && current->next->next->next->next->cat3 < current->next->next->next->next->next->cat3)
			{
				current->outCat3 = 1;
				current->next->outCat3 = 1;
				current->next->next->outCat3 = 1;
				current->next->next->next->outCat3 = 1;
				current->next->next->next->next->outCat3 = 1;
				current->next->next->next->next->next->outCat3 = 1;
			}
			break;
		case 4:
			if (current->cat4 < current->next->cat4 && current->next->cat4 < current->next->next->cat4 && current->next->next->cat4 < current->next->next->next->cat4 && current->next->next->next->cat4 < current->next->next->next->next->cat4 && current->next->next->next->next->cat4 < current->next->next->next->next->next->cat4)
			{
				current->outCat4 = 1;
				current->next->outCat4 = 1;
				current->next->next->outCat4 = 1;
				current->next->next->next->outCat4 = 1;
				current->next->next->next->next->outCat4 = 1;
				current->next->next->next->next->next->outCat4 = 1;
			}
			break;
		case 5:
			if (current->cat5 < current->next->cat5 && current->next->cat5 < current->next->next->cat5 && current->next->next->cat5 < current->next->next->next->cat5 && current->next->next->next->cat5 < current->next->next->next->next->cat5 && current->next->next->next->next->cat5 < current->next->next->next->next->next->cat5)
			{
				current->outCat5 = 1;
				current->next->outCat5 = 1;
				current->next->next->outCat5 = 1;
				current->next->next->next->outCat5 = 1;
				current->next->next->next->next->outCat5 = 1;
				current->next->next->next->next->next->outCat5 = 1;
			}
			break;
		default:
			break;
		}
		current = current->next;
	}

	current = head; // reset current to the beginning of the list for the next iteration

	//6 or more points in a row decreasing
	while (current->next->next->next->next->next != NULL)
	{
		switch (category->number)
		{
		case 1:
			if (current->cat1 > current->next->cat1 && current->next->cat1 > current->next->next->cat1 && current->next->next->cat1 > current->next->next->next->cat1 && current->next->next->next->cat1 > current->next->next->next->next->cat1 && current->next->next->next->next->cat1 > current->next->next->next->next->next->cat1)
			{
				current->outCat1 = 1;
				current->next->outCat1 = 1;
				current->next->next->outCat1 = 1;
				current->next->next->next->outCat1 = 1;
				current->next->next->next->next->outCat1 = 1;
				current->next->next->next->next->next->outCat1 = 1;
			}
			break;
		case 2:
			if (current->cat2 > current->next->cat2 && current->next->cat2 > current->next->next->cat2 && current->next->next->cat2 > current->next->next->next->cat2 && current->next->next->next->cat2 > current->next->next->next->next->cat2 && current->next->next->next->next->cat2 > current->next->next->next->next->next->cat2)
			{
				current->outCat2 = 1;
				current->next->outCat2 = 1;
				current->next->next->outCat2 = 1;
				current->next->next->next->outCat2 = 1;
				current->next->next->next->next->outCat2 = 1;
				current->next->next->next->next->next->outCat2 = 1;
			}
			break;
		case 3:
			if (current->cat3 > current->next->cat3 && current->next->cat3 > current->next->next->cat3 && current->next->next->cat3 > current->next->next->next->cat3 && current->next->next->next->cat3 > current->next->next->next->next->cat3 && current->next->next->next->next->cat3 > current->next->next->next->next->next->cat3)
			{
				current->outCat3 = 1;
				current->next->outCat3 = 1;
				current->next->next->outCat3 = 1;
				current->next->next->next->outCat3 = 1;
				current->next->next->next->next->outCat3 = 1;
				current->next->next->next->next->next->outCat3 = 1;
			}
			break;
		case 4:
			if (current->cat4 > current->next->cat4 && current->next->cat4 > current->next->next->cat4 && current->next->next->cat4 > current->next->next->next->cat4 && current->next->next->next->cat4 > current->next->next->next->next->cat4 && current->next->next->next->next->cat4 > current->next->next->next->next->next->cat4)
			{
				current->outCat4 = 1;
				current->next->outCat4 = 1;
				current->next->next->outCat4 = 1;
				current->next->next->next->outCat4 = 1;
				current->next->next->next->next->outCat4 = 1;
				current->next->next->next->next->next->outCat4 = 1;
			}
			break;
		case 5:
			if (current->cat5 > current->next->cat5 && current->next->cat5 > current->next->next->cat5 && current->next->next->cat5 > current->next->next->next->cat5 && current->next->next->next->cat5 > current->next->next->next->next->cat5 && current->next->next->next->next->cat5 > current->next->next->next->next->next->cat5)
			{
				current->outCat5 = 1;
				current->next->outCat5 = 1;
				current->next->next->outCat5 = 1;
				current->next->next->next->outCat5 = 1;
				current->next->next->next->next->outCat5 = 1;
				current->next->next->next->next->next->outCat5 = 1;
			}
			break;
		default:
			break;
		}
		current = current->next;
	}
}

void NelsonRuleFour(Point* head, Category* category)
{
	Point* current = head;

	Point* two = current->next;
	Point* three = two->next;
	Point* four = three->next;
	Point* five = four->next;
	Point* six = five->next;
	Point* seven = six->next;
	Point* eight = seven->next;
	Point* nine = eight->next;
	Point* ten = nine->next;
	Point* eleven = ten->next;
	Point* twelve = eleven->next;
	Point* thirteen = twelve->next;
	Point* fourteen = thirteen->next;

	//14 or more points alternating in direction (increasing then decreasing)
	while (fourteen != NULL)
	{
		switch (category->number)
		{
		case 1:
			if (current->cat1 < two->cat1 && two->cat1 > three->cat1 && three->cat1 < four->cat1 && four->cat1 > five->cat1 && five->cat1 < six->cat1 && six->cat1 > seven->cat1 && seven->cat1 < eight->cat1 && eight->cat1 > nine->cat1 && nine->cat1 < ten->cat1 && ten->cat1 > eleven->cat1 && eleven->cat1 < twelve->cat1 && twelve->cat1 > thirteen->cat1 && thirteen->cat1 < fourteen->cat1)
			{
				current->outCat1 = 1;
				two->outCat1 = 1;
				three->outCat1 = 1;
				four->outCat1 = 1;
				five->outCat1 = 1;
				six->outCat1 = 1;
				seven->outCat1 = 1;
				eight->outCat1 = 1;
				nine->outCat1 = 1;
				ten->outCat1 = 1;
				eleven->outCat1 = 1;
				twelve->outCat1 = 1;
				thirteen->outCat1 = 1;
				fourteen->outCat1 = 1;
			}
			break;
		case 2:
			if (current->cat2 < two->cat2 && two->cat2 > three->cat2 && three->cat2 < four->cat2 && four->cat2 > five->cat2 && five->cat2 < six->cat2 && six->cat2 > seven->cat2 && seven->cat2 < eight->cat2 && eight->cat2 > nine->cat2 && nine->cat2 < ten->cat2 && ten->cat2 > eleven->cat2 && eleven->cat2 < twelve->cat2 && twelve->cat2 > thirteen->cat2 && thirteen->cat2 < fourteen->cat2)
			{
				current->outCat2 = 1;
				two->outCat2 = 1;
				three->outCat2 = 1;
				four->outCat2 = 1;
				five->outCat2 = 1;
				six->outCat2 = 1;
				seven->outCat2 = 1;
				eight->outCat2 = 1;
				nine->outCat2 = 1;
				ten->outCat2 = 1;
				eleven->outCat2 = 1;
				twelve->outCat2 = 1;
				thirteen->outCat2 = 1;
				fourteen->outCat2 = 1;
			}
			break;
		case 3:
			if (current->cat3 < two->cat3 && two->cat3 > three->cat3 && three->cat3 < four->cat3 && four->cat3 > five->cat3 && five->cat3 < six->cat3 && six->cat3 > seven->cat3 && seven->cat3 < eight->cat3 && eight->cat3 > nine->cat3 && nine->cat3 < ten->cat3 && ten->cat3 > eleven->cat3 && eleven->cat3 < twelve->cat3 && twelve->cat3 > thirteen->cat3 && thirteen->cat3 < fourteen->cat3)
			{
				current->outCat3 = 1;
				two->outCat3 = 1;
				three->outCat3 = 1;
				four->outCat3 = 1;
				five->outCat3 = 1;
				six->outCat3 = 1;
				seven->outCat3 = 1;
				eight->outCat3 = 1;
				nine->outCat3 = 1;
				ten->outCat3 = 1;
				eleven->outCat3 = 1;
				twelve->outCat3 = 1;
				thirteen->outCat3 = 1;
				fourteen->outCat3 = 1;
			}
			break;
		case 4:
			if (current->cat4 < two->cat4 && two->cat4 > three->cat4 && three->cat4 < four->cat4 && four->cat4 > five->cat4 && five->cat4 < six->cat4 && six->cat4 > seven->cat4 && seven->cat4 < eight->cat4 && eight->cat4 > nine->cat4 && nine->cat4 < ten->cat4 && ten->cat4 > eleven->cat4 && eleven->cat4 < twelve->cat4 && twelve->cat4 > thirteen->cat4 && thirteen->cat4 < fourteen->cat4)
			{
				current->outCat4 = 1;
				two->outCat4 = 1;
				three->outCat4 = 1;
				four->outCat4 = 1;
				five->outCat4 = 1;
				six->outCat4 = 1;
				seven->outCat4 = 1;
				eight->outCat4 = 1;
				nine->outCat4 = 1;
				ten->outCat4 = 1;
				eleven->outCat4 = 1;
				twelve->outCat4 = 1;
				thirteen->outCat4 = 1;
				fourteen->outCat4 = 1;
			}
			break;
		case 5:
			if (current->cat5 < two->cat5 && two->cat5 > three->cat5 && three->cat5 < four->cat5 && four->cat5 > five->cat5 && five->cat5 < six->cat5 && six->cat5 > seven->cat5 && seven->cat5 < eight->cat5 && eight->cat5 > nine->cat5 && nine->cat5 < ten->cat5 && ten->cat5 > eleven->cat5 && eleven->cat5 < twelve->cat5 && twelve->cat5 > thirteen->cat5 && thirteen->cat5 < fourteen->cat5)
			{
				current->outCat5 = 1;
				two->outCat5 = 1;
				three->outCat5 = 1;
				four->outCat5 = 1;
				five->outCat5 = 1;
				six->outCat5 = 1;
				seven->outCat5 = 1;
				eight->outCat5 = 1;
				nine->outCat5 = 1;
				ten->outCat5 = 1;
				eleven->outCat5 = 1;
				twelve->outCat5 = 1;
				thirteen->outCat5 = 1;
				fourteen->outCat5 = 1;
			}
			break;
		default:
			break;
		}
		current = current->next;

	//14 or more points alternating in direction (decreasing then increasing)
}

void NelsonRuleFive(Point* head, Category* category)
{
	Point* current = head;
	double stddev = category->standardDeviation;
	double mean = category->mean;

	//2 out of 3 points in a row more than 2 stddev above mean

	//2 out of 3 points in a row more than 2 stddev below mean
}

void NelsonRuleSix(Point* head, Category* category)
{
	Point* current = head;
	double stddev = category->standardDeviation;
	double mean = category->mean;

	//4 out of 5 points in a row are more than 1 standard deviation above the mean in same direction

	//4 out of 5 points in a row are more than 1 standard deviation below the mean in same direction
}

void NelsonRuleSeven(Point* head, Category* category)
{
	Point* current = head;
	double stddev = category->standardDeviation;
	double mean = category->mean;

	//15 points in a row are all within 1 stddev of the mean above the mean

	//15 points in a row are all within 1 stddev of the mean below the mean

}

void NelsonRuleEight(Point* head, Category* category)
{
	Point* current = head;
	double stddev = category->standardDeviation;
	double mean = category->mean;

	//8 points in a row exist with none within 1stddev of the mean and points are in both directions from the mean

}
