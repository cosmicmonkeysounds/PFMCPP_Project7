#include "HelpfulItem.h"
#include "Utility.h"

void HelpfulItem::use(Character *character)
{
    useHelpfulItem(character, this);
}

HelpfulItem::~HelpfulItem()
{
    std::cout << "\nDestroying a helpful item\n";
}
