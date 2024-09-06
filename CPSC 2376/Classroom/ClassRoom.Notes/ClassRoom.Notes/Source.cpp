#include <iostream>
#include <string>
#include <fstream>
#include <random>

//std::string functionExample(std::string& book);

int main()
{


	//Random needs 3 things:
	//	1. Seed 
	//	2. Engine
	//	3. Distribution

	//seed can or cannot be random or it can be defined as a number depending on the use case
		//std::random_device seed();

		//std::default_random_engine engine(seed);

		////Typical Distributions
		//// normal_distribution <type> name(mean, standard deviation)
		//std::normal_distribution<double> normal(10.0, 1.0);
		//// uniform_int_distribution <type> name(min, max)
		//std::uniform_int_distribution<int> uniform(1, 20);
		////bernoulli_distribution name(0 < float < 1) float is a percentage between 0 and 1
		//std::bernoulli_distribution bernoulli(.66);


		//Functions and passing by value and reference

		//int x{ 3 };
		//reference variable 
		//nickname - refers to a memory location
		//int& y{ x };

		//std::cout << "x: " << x << std::endl;
		//std::cout << "&y: " << y << std::endl;

		//std::string book{"lots of words! "};

		//const is copied and not modified -- nothing changes within a function
		//const std::string& constBook{book};
		//passing by reference in a function allows the variable to change
		//std::string& refBook{book}; 

		//functionExample(book);

		//std::cout << book << std::endl; 

		//File I/O
		//file input == READ FROM FILE
		//file output == WRITE TO FILE
		//input grabs 1 word at a time. formatting??
		//output needs formatting - usually with a function
		//format for function is usually ::
		//(number of lines) 2
		//(number of things in line) 3 (5, 1, 2)
		//need to close() output
		//if using std::fstream fio : can use to I/O : must close each time you instantiate usage to change between input and output
		//appending can happen ios::app()


}


//std::string functionExample(std::string& book)
//{
//	//book can and will change when it is passed into this function
//	//because it is passed by reference
//	//if it were const &, then the value would not be able to be changed
//	return book;
//}
