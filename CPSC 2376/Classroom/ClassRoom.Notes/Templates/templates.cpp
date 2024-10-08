#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

template<typename T>
void Print(T value)
{
	std::cout << value << std::endl;
}

class Object
{
public:
	std::string name{"Bing_Bong"};
	int number{};
};



int main()
{
	Object bingbong;

	std::cout << bingbong.name << std::endl;

	bingbong.name = "bing_bong";

	std::cout << bingbong.name << std::endl;
	Print(bingbong.name);

}
