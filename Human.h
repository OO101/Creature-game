#ifndef HUMAN_H_INCLUDED
#define HUMAN_H_INCLUDED
#include "Creature.h"
namespace cs_creature{


   class Human: public Creature{
public:
   Human(int newType, int newStrength, int newHitpoints) : Creature(newType, newStrength, newHitpoints){};

   std::string getSpecies() const;
   int getDamage() const;
   int DEFAULT_STRENGTH = 10;
   int DEFAULT_HITPOINTS = 10;
   } ;
}


#endif // HUMAN_H_INCLUDED
