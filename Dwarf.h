#pragma once

#include "Character.h"

struct Dwarf : public Character
{

public: 
    // name, hit points, armour
    Dwarf( const std::string& name_, int hp_, int armor_ );
    ~Dwarf() override;

    const std::string& getName() override;
    std::string getStats() override;

private:
    const std::string name;
};
