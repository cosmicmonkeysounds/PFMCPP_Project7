#include "Dwarf.h"
#include "Character.h"
#include <string>

Dwarf::Dwarf( const std::string& name_ , int hp_, int armor_ ) 
                : Character( hp_, armor_, 4 ), name(name_) {}

Dwarf::~Dwarf()
{
    std::cout << "\n\nD'oh!\n\n";
}

const std::string& Dwarf::getName()
{
    return this->name;
}

std::string Dwarf::getStats()
{
    return "\n\nHit points: " + std::to_string(hitPoints) + "\nArmor: " + std::to_string(armor) + "\nAttack Damage: " + std::to_string(attackDamage) + "\n\n";
}
