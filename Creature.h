#ifndef CREATURE_H_INCLUDED
#define CREATURE_H_INCLUDED
#include <string>
namespace cs_creature{
class Creature {
    protected:
        int type;                     // 0 human, 1 cyberdemon, 2 balrog, 3 elf
        int strength;                 // how much damage this Creature inflicts
        int hitpoints;                // how much damage this Creature can sustain
           std::string getSpecies() const; // returns the type of the species





    public:
        Creature();                   // initialize to human, 10 strength, 10 hitpoints
        Creature(int newType, int newStrength, int newHitpoints);
        int getDamage() const;        // returns the amount of damage this Creature
        int getStrength() const;
        void setStrength(int newStrength);
         int getHitpoints() const;
         void setHitpoints(int newHitpoints);                       // inflicts in one round of combat

        // also include appropriate accessors and mutators
};
}
#endif // CREATURE_H_INCLUDED
