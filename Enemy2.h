#pragma once
#include "BaseEnemy.h"
#include <iostream>
class Enemy2 :
    public BaseEnemy
{
public:
    Enemy2(const int hp);
    virtual void Attack() override { std::cout << "Enemy::Attack" << std::endl; }
};

