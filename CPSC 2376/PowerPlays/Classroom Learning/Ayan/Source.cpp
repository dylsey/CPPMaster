#include <iostream>
#include <string>

static struct Monster
{
	std::string name{ "Ayan" };

};


int main()
{
	std::cout << "sup bro" << std::endl; 

	Monster monster;

	std::cout << monster.name << std::endl;
	
}