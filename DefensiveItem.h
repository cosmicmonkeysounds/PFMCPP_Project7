#pragma once

#include "Item.h"
#include "Character.h"

struct DefensiveItem : public Item
{
    DefensiveItem() : Item("defensive item", 3) { }
    ~DefensiveItem() override;
    virtual void use(Character* character) override;
};
