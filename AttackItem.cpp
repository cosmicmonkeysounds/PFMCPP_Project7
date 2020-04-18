#include "AttackItem.h"
#include <iostream>
#include "Utility.h"

void AttackItem::use(Character* character)
{
    useAttackItem(character, this);
}

AttackItem::~AttackItem()
{
    std::cout << "\nDestroying an attack item\n";
}
