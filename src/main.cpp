#include <iostream>
#include "Module1.hpp"


int main(int argc, char *argv[])
{
	std::cout << "Hello world ! \n";
	init();
	Student t = {1, "Jonh"};
	addStudent(&t);
	printStudent;
	return 0;
}
