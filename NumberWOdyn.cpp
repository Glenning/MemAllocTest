#include <iostream>
using namespace std;

class Number1 //constructor without dynamic allocation
{
private:
	double number;

public:
	Number1(double num)
	{
		number = num;
		cout << "Constructor executing!\n";
		cout << "Number: " << number << "\n";
	}

	~Number1()
	{
		cout << "Destructor executing!\n";
		cout << "Number: " << number << "\n";
	}
};

int main2()
{
	Number1 nine(9);

	return 0;
}