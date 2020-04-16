#pragma once

#include "Item.h"

struct AttackItem : public Item
{
    AttackItem() : Item("attack item", 5) {}
    virtual void use(Character* character) override;
};
