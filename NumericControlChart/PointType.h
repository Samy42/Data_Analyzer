struct Point
{
	string time;
	double cat1;
	double cat2;
	double cat3;
	double cat4;
	double cat5;
	bool outCat1 = 0;
	bool outCat2 = 0;
	bool outCat3 = 0;
	bool outCat4 = 0;
	bool outCat5 = 0;
	Point* prev = NULL;
	Point* next = NULL;
	Point(){}
	Point(string time, double cat1, double cat2, double cat3, double cat4, double cat5)
	{
		this->time = time;
		this->cat1 = cat1;
		this->cat2 = cat2;
		this->cat3 = cat3;
		this->cat4 = cat4;
		this->cat5 = cat5;
	}
	void display()
	{
		cout << time << " " << cat1 << " " << cat2 << " " << cat3 << " " << cat4 << " " << cat5 << endl;
	}
};