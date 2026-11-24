//
// Created by leafy on 11/19/2026.
//

#ifndef BATTLE_FOR_THE_KINGDOM_CHARACTER_H
#define BATTLE_FOR_THE_KINGDOM_CHARACTER_H

#include <iostream>
#include <string>
using namespace std;

class Character{
    private:
    int x;  //characters x position on the map
    int y;  //characters y position on the map
    string name;  //name of the character, used to differentiate between characters
    double currentHealth;  //the amount of health a character has left
    double maxHealth;  //the max health a character can have, stops the character
                       //from just recieving healing for 20 turns and having an 
                       //ungodly amount of hp
    double attack;  //attack power of the character, used to determine how much 
                    //health an opposing character loses when this character attacks
    double defense; //defense value of the character, used to represent armor or
                    //maybe a magic shield, it is used to mitigate incoming damage
    bool alive; //used to determine if the character is alive, if the character is
                //dead then this will stop the character from recieving healing and
                //coming back from the dead
    
}


#endif //BATTLE_FOR_THE_KINGDOM_CHARACTER_H
