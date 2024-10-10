#include <iostream>
#include <vector>
#include "Parent.h"
#include "Child.h"

int main()
{
    Child child;
    Parent* parentPtr = &child; // Demonstrating polymorphism

    // Using polymorphism to call overridden methods
    parentPtr->disciplineChild("Time-out");

    // Demonstrating polymorphic behavior with haveBaby
    std::vector<Grandchild> grandchildren;
    child.haveBaby(child, grandchildren);


}


