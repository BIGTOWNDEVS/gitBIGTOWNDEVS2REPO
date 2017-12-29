#include <iostream>
#include <ctime>
#include <list>
#include <vector>
#include <iomanip>
#include <algorithm>

#pragma warning(disable: 4996)


int main(void)
{
	//register the execution time.
	std::time_t t = std::time(nullptr);
	std::cout << "UTC:       " << std::put_time(std::gmtime(&t), "%c %Z") << '\n';
	std::cout << "local:     " << std::put_time(std::localtime(&t), "%c %Z") << '\n';

	std::list<int> path;
	for(int i = 0; i < 10; i++)
		path.push_back(i);

	return 0;
}