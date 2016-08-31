//
//  Player.hpp
//  Text Adventure
//
//  Created by Sachin Katyal on 8/31/16.
//  Copyright © 2016 Sachin Katyal. All rights reserved.
//

#ifndef Player_hpp
#define Player_hpp

#include <stdio.h>
#include <string>
#include "Weapon.cpp"

using namespace std;

class Player{
    
private:
    string name;
    int strength;
    Weapon weapon;
    
public:
    Player();
    ~Player();
    
    Player(string name, int strength, Weapon weapon)
    :name(name), strength(strength), weapon(weapon){}
    
    string getName() const;
    void setName(string name);
    
    int getStrength() const;
    void setStrength(int strength);
    
    Weapon getWeapon() const;
    void setWeapon(Weapon weapon);
    
};

#endif /* Player_hpp */
