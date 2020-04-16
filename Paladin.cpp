#include "Paladin.h"
#include "Utility.h"
#include <string>

Paladin::Paladin( const std::string& name_ , int hp_, int armor_ ) 
            : Character( hp_, armor_, 10 ), name(name_) {}

Paladin::~Paladin()
{
    std::cout << "\n\nI am defeated!\n\n";
}

const std::string& Paladin::getName()
{
    return this->name;
}

std::string Paladin::getStats()
{
    return getName() + "'s stats are: " + getCharacterStats( this ) + "\n\n";
}
