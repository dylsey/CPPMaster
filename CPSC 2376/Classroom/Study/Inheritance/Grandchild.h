#pragma once
#include <iostream>
#include "Child.h"

class Grandchild : public Child
{
public:
    Grandchild();
    void haveBaby(Child& child, std::vector<Grandchild>& grandchildren) override;
    void disciplineChild(const std::string& disciplineMethod) override;
};
