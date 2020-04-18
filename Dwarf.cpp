#include "Dwarf.h"
#include "Utility.h"

#include <string>

Dwarf::Dwarf( const std::string& name_ , int hp_, int armor_ ) 
                : Character( hp_, armor_, 4 ), name(name_) 
                {
                    defensiveItems = makeDefensiveItems(2);
                    helpfulItems = makeHelpfulItems(1);
                }

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
    return getName() + "'s stats are: " + getCharacterStats( this ) + "\n\n";
}
