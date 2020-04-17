#pragma once

#include "Item.h"

struct AttackItem : public Item
{
    AttackItem() : Item("attack item", 5) {}
    ~AttackItem() override;
    virtual void use(Character* character) override;
};
