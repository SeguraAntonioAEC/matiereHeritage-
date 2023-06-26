#pragma once
#include "BaseEnemy.h"
#include <iostream>
class Enemy1 :
    public BaseEnemy
{
public:
    Enemy1(const int hp);
    virtual void Attack() override { std::cout << "Enemy::Attack" << std::endl; }
};

