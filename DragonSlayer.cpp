#include "DragonSlayer.h"
#include "AttackItem.h"
#include "Dragon.h"
#include "Utility.h"

DragonSlayer::DragonSlayer( const std::string& name_ , int hp_, int armor_ ) 
                : Character( hp_, armor_, 4 ), name(name_) 
                {
                    defensiveItems = makeDefensiveItems(4);
                    helpfulItems = makeHelpfulItems(2);
                    attackItems = makeAttackItems(10);
                }

DragonSlayer::~DragonSlayer()
{
    std::cout << "\n\nD'oh!\n\n";
}

const std::string& DragonSlayer::getName()
{
    return name;
}

std::string DragonSlayer::getStats()
{
    return getName() + "'s stats are: " + getCharacterStats( this ) + "\n\n";
}

void DragonSlayer::attack(Character& other)
{
    std::cout << name << " is attacking " << other.getName() << " !!" << std::endl;
    if( auto* dragon = dynamic_cast<Dragon*>(&other) )
    {   
        for( auto& item : attackItems )
        {
            if( auto* attackItem = dynamic_cast<AttackItem*>( item.get() ) )
            {
                attackItem->use(this);
                item.reset(); //can only be used once!
                break;
            }
        }
        //DragonSlayers get a 10x boost when attacking Dragon, from their attack item.
        //so they should USE their attack item before attacking the Dragon... 
        //note that items are single-use only, so you need to reset it after use.  
        //look in the Character class for how the other item types are reset after use.
        
        while( dragon->getHP() > 0 )
        {
          dragon->takeDamage(attackDamage);
        }


    }
        
    Character::attack(other);
        
}

