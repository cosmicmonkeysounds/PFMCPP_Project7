#include "Item.h"
#include <iostream>

Item::~Item()
{
    std::cout << "Destroying item\n";
}

void Item::use(Character*)
{
    std::cout << "Hmm";
}
