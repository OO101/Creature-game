#include "Elf.h"
#include <iostream>
using namespace std;
namespace cs_creature{

    string Elf::getSpecies() const
    {
        return "Elf";
    }

int Elf::getDamage() const
{
    int damage = Creature::getDamage();
     cout << getSpecies() << " attacks for " << damage << " points!" << endl;
      if (type == 3) {
        if (rand() % 100 * 0.01 < MAGICAL_ATTACK_PROBABILITY) {
            cout << "Magical attack inflicts " << damage << " additional damage points!" << endl;
            damage *= MAGICAL_ATTACK_MULTIPLIER;
        }
        return damage;
}

}
}
