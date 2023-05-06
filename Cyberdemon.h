#ifndef CYBERDEMON_H_INCLUDED
#define CYBERDEMON_H_INCLUDED
#include "demon.h"
namespace cs_creature{
class Cyberdemon: public Demon{

public:
    Cyberdemon() : Demon(){};
    Cyberdemon(int newType, int newStrength, int newHitpoints) : Demon(newType, newStrength, newHitpoints) {};
    std::string getSpecies() const;
    int getDamage() const;
};
}


#endif // CYBERDEMON_H_INCLUDED
