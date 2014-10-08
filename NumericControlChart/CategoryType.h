struct Category
{
	string name;
	int number;
	int count = 0;
	double total = 0.0;
	double standardDeviation;
	double mean;
	Category(){}
	Category(string name, int number)
	{
		this->name = name;
		this->number = number;
	}
};