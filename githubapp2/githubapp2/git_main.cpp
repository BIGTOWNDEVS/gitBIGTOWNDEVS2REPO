#include <iostream>
#include <ctime>
#include <list>
#include <vector>
#include <iomanip>

#pragma warning(disable: 4996)


int main(void)
{
	//register the execution time.
	std::time_t t = std::time(nullptr);
	std::cout << "UTC:       " << std::put_time(std::gmtime(&t), "%c %Z") << '\n';
	std::cout << "local:     " << std::put_time(std::localtime(&t), "%c %Z") << '\n';

	return 0;
}