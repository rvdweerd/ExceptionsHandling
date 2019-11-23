#include <iostream>

int sum(int a, int b)
{
	if (a == 69)
	{
		throw std::runtime_error("<a> is the s number!");
	}
	if (b == 420)
	{
		throw std::logic_error("<b> is the weed number!");
	}
	return a + b;
}

int f(int x, int y, int z)
{
	try
	{
		return sum(x, y) * sum(y, z);
	}
	catch (const std::runtime_error& e)
	{
		std::cout << "Caught a std::runtime_error in f: " << e.what() << std::endl;
		throw;// e;
		return 69420;
	}
}

int main()
{
	try 
	{
		//throw std::runtime_error("An exception!");
		//std::cout << "sum: 69 + 1 = " << sum(69, 1) << std::endl;
		//std::cout << "sum: 65 + 1 = " << sum(65, 1) << std::endl;
		std::cout << "f(69,1,1): " << f(69,420, 1) << std::endl;
	}
	catch( const std::runtime_error& e)
	{
		std::cout << "Caught a std::runtime_error in main: " << e.what() << std::endl;
	}
	catch (const std::exception & e)
	{
		std::cout << "Caught an std::exception in main: " << e.what() << std::endl;
	}
	catch (int& val)
	{
		std::cout << "caught an int in main: " << val << std::endl;
	}
	catch (...)
	{
		std::cout << "Something else got thrown.\n";
	}
	std::cin.get();
	return 0;
}