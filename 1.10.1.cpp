#include <fstream>
#include <iostream>
int main()
{
	std::ofstream age_file("age.txt");
	std::cout <<"What is your age?"<<std::endl;
	int age;
	std::cin >> age;
	age_file << age << std::endl;
}
