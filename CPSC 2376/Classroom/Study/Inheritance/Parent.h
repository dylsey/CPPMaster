#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <random>
#include <algorithm>

class Child;
class Grandchild;

class Parent
{
public:
    enum class Lineage
    {
        mother,
        secondGen,
        thirdGen,
        fourthGen
    };

    Parent();
    Parent(Lineage generation, std::string name, int age, const bool isParent);
    virtual ~Parent() = default;

    Lineage generation{ Lineage::mother };
    std::string name{ "mother" };
    int age{ 1 };
    bool hasChildren{ true };

    virtual void haveBaby(Child& child, std::vector<Grandchild>& grandchildren) = 0;
    virtual void disciplineChild(const std::string& disciplineMethod); // Virtual function

    std::string getName() const;
    int getAge() const;
    std::string makeRule(std::string rule);
    int birthday(int& age);
    void changeName(std::string updateName);
    void print(std::ostream& o);

protected:
    const bool isParent{ true };
};

std::ostream& operator<< (std::ostream& o, const Parent& parent);


