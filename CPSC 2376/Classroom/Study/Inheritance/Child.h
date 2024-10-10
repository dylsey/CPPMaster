

#pragma once
#include <iostream>
#include "Parent.h"

class Child : public Parent
{
public:
    Child();
    void haveBaby(Child& child, std::vector<Grandchild>& grandchildren) override;
    void disciplineChild(const std::string& disciplineMethod) override;
};
