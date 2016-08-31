//
//  Weapon.hpp
//  Text Adventure
//
//  Created by Sachin Katyal on 8/31/16.
//  Copyright © 2016 Sachin Katyal. All rights reserved.
//

#ifndef Weapon_hpp
#define Weapon_hpp

#include <stdio.h>
#include <string>

using namespace std;


class Weapon {
    
private:
    string name;
    int damage;
    int weight;
    int amunition;
    
public:
    Weapon();
    ~Weapon();
    
    Weapon(string name, int damage, int weight, int amunition):name(name), damage(damage), weight(weight), amunition(amunition){}
    
    int getDamage() const;
    void setDamage(int damage);
    
    int getAmunition() const;
    void setAmunition(int amunition);
    
    
};


#endif /* Weapon_hpp */
