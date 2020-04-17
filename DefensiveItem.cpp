#include "DefensiveItem.h"
#include "Character.h"
#include "Utility.h"
// #include "Dwarf.h"
// #include "Paladin.h"
// #include "DragonSlayer.h"
// #include "Dragon.h"

void DefensiveItem::use(Character* character)
{
    useDefensiveItem(character, *this);
}

DefensiveItem::~DefensiveItem()
{
    std::cout << "\nDestroying a defensive item\n";
}
