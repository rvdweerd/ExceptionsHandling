#include <iostream>

int sum(int a, int b)
{
	if (a == 69)
	{
		throw std::runtime_error("<a> number not allowed");
	}
	return a + b;
}

int main()
{
	try 
	{
		//throw std::runtime_error("An exception!");
		std::cout << "sum: 69 + 1 = " << sum(69, 1) << std::endl;
	}
	catch( const std::runtime_error& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cin.get();
	return 0;
}