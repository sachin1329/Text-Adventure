//
//  Player.cpp
//  Text Adventure
//
//  Created by Sachin Katyal on 8/31/16.
//  Copyright © 2016 Sachin Katyal. All rights reserved.
//

#include "Player.hpp"
#include <iostream>


Player::Player() {
    
}

string Player::getName() const{
    return name;
}

void Player::setName(string name) {
    this-> name = name;
}

int Player::getStrength() const {
    return strength;
}

void Player::setStrength(int strength) {
    this->strength = strength;
}

Weapon Player::getWeapon() const {
    return weapon;
}

void Player::setWeapon(Weapon weapon) {
    this->weapon = weapon;
}