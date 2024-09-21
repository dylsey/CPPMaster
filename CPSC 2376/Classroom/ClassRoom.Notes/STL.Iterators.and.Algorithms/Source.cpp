#include <iostream>
#include <vector>
#include <algorithm>

struct Point {
    int x, y;
};

int main()
{
    //stl Iterators
    //Pointers with privledges
    //Iterators purpose is to use Algorithms
    //.begin() -> pointer that returns the beginning item/element within a sequential container
    //.end() -> pointer to a "character?" at the end that has not been defined 
        //.end() is usually used to compare wether or not a type is returned that matches the container type. 
        // used to check if you have reached the end of a container
    //iterator has to be dereferenced if you want to value it is pointing to 

    std::vector<int> v{ 1, 2, 3, 4, 5 };
    std::vector<int>::iterator vIter;//actual way to call an iterator
    auto vIter2{ v.begin() }; //auto gives us syntatic sugar


   // std::cout << *vIter2;

    std::vector<Point> points{ {1,1}, {2,2}, {3,3} };

    auto thisPoint{ points.begin() };


    //lambda vs function

    auto fooLambda
    { 
        [&](int num1, int num2)
        {
            //myPoint.x = 2;
            thisPoint;
            points.begin()->x = 3;
            return num1 * num2;
        }  
    };

    int x{ 4 };
    for (auto& i : v)
    {
        i += x;
        std::cout << "i in auto for each: " << i << std::endl;
    }

   

    auto understandLambda
    {
        [&](int& i)
        {
            i += x;
            x++;
            std::cout << " i value: " << i << std::endl;
            std::cout << " x value: " << x << std::endl;
        }
    };

}