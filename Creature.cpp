#include "Creature.h"
#include <iostream>
namespace cs_creature{
Creature::Creature() : strength(10) , hitpoints(10){}


Creature::Creature(int newType, int newStrength, int newHitpoints) : type(newType), strength(newStrength), hitpoints(newHitpoints){}



std::string Creature::getSpecies() const {
    switch (type) {
        case 0: return "human";
        case 1: return "cyberdemon";
        case 2: return "balrog";
        case 3: return "elf";
    }
    return "unknown";
}
int Creature::getDamage() const {
    int damage;

    // All Creatures inflict damage which is a random number up to their strength
    damage = (rand() % strength) + 1;

    return damage;
}

    int Creature::getStrength() const
    {
        return strength;
    }

    void Creature::setStrength(int TStrength)
    {
        strength = TStrength;
    }

    int Creature::getHitpoints() const
    {
        return hitpoints;
    }

    void Creature::setHitpoints(int THitpoints)
    {
        hitpoints = THitpoints;
    }

}
