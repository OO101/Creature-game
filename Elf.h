#ifndef ELF_H_INCLUDED
#define ELF_H_INCLUDED
#include "Creature.h"
namespace cs_creature{

class Elf : public Creature{

public:
    Elf() : Creature() {};
    Elf(int newType, int newStrength, int newHitpoint) : Creature(newType, newStrength, newHitpoint){};

std::string getSpecies() const;
int getDamage() const;
double MAGICAL_ATTACK_PROBABILITY = 0.5;
double MAGICAL_ATTACK_MULTIPLIER = 2.0;

};
}
#endif // ELF_H_INCLUDED
