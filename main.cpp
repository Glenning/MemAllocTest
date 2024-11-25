#include <iostream>

class Number //this is the most optimized version possible
{
private: int *number;

public:
	Number(int num)
	{
		number = (int*)malloc(sizeof(int));
		//using malloc to dynamically allocate the size of an int for number prop
		*number = num;
		std::cout << "Constructor executing!\n";
		std::cout << "Number: " << *number << "\n";
	}

	~Number()
	{
		std::cout << "Destructor executing!\n";
		std::cout << "Number: " << *number << "\n";
		free(number);
		//de-allocates the memory, preventing memory leaks
	}
};

int main()
{
	Number nine(9);
}