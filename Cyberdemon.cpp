#include "Cyberdemon.h"
#include <iostream>
using namespace std;
namespace cs_creature{

string Creature::getSpecies() const {
    switch (type) {
        case 0: return "human";
        case 1: return "cyberdemon";
        case 2: return "balrog";
        case 3: return "elf";
    }
    return "unknown";
}
int Cyberdemon::getDamage() const{

int damage = Demon::getDamage();

cout << getSpecies() << " attacks for " << damage << " points!" << endl;
 if (type == 2 || type == 1){
        if (rand() % 100 * 0.01 < DEMONIC_ATTACK_PROBABILITY) {
            damage = damage + DEMONIC_BONUS_DAMAGE;
            cout << "Demonic attack inflicts " << DEMONIC_BONUS_DAMAGE << " additional damage points!" << endl;
        return (damage+50);
        }
        return damage;
}
}
}
