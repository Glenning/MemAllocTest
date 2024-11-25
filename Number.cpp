#include <iostream>
using namespace std;

class Number1 //testing malloc without optimizing fully
{
private:
	double *number;

public:
	Number1(double num)
	{
		number = (double*)malloc(sizeof(double)); //dynamically allocates just enough memory for a double
		*number = num;
		cout << "Constructor executing!\n";
		cout << "Number: " << *number << "\n";
	}

	~Number1()
	{
		cout << "Destructor executing!\n";
		cout << "Number: " << *number << "\n";
		free(number); //de-allocates the dynamically allocated memory, prevents mem leaks actively
	}
};

int main1()
{
	Number1* three = new Number1(3);
	delete three; //more explicitly deletes an object made

	Number1 nine(9);

	return 0;
}