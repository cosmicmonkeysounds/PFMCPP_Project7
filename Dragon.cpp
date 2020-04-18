#include "Dragon.h"
#include "DragonSlayer.h"

Dragon::Dragon( const std::string& name_ , int hp_, int armor_ ) 
            : Character( hp_, armor_, 80 ), name(name_) {}

Dragon::~Dragon()
{
    std::cout << "\n\nRawr! I'm dead.\n\n";
}

const std::string& Dragon::getName()
{
    return name;
}

std::string Dragon::getStats()
{
    return "\n\nHit points: " + std::to_string(this->hitPoints) + "\nArmor: " + std::to_string(this->armor) + "\nAttack Damage: " + std::to_string(this->attackDamage) + "\n\n";
}

void Dragon::attack(Character &other)
{
    std::cout << name << " is attacking " << other.getName() << "!!!" << std::endl;
    if( auto* slayer = dynamic_cast<DragonSlayer*>(&other) )
    {
        //dragons can't attack dragon slayers
        slayer->defend();
    }
    else
    {
        Character::attack(other);
    }
}

