#include "Human.h"
#include <iostream>
using namespace std;
namespace cs_creature{
string Human::getSpecies() const
{
    return "Human";
}
int Human::getDamage() const
{
    int damage = Human::getDamage();
    cout << getSpecies() << " attacks for " << damage << " points!" << endl;
    return damage;
}

}
