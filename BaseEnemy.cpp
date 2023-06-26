#include "BaseEnemy.h"
#include <iostream>
BaseEnemy::BaseEnemy(const int hp)
	:m_Hp(hp)
{

}

BaseEnemy::~BaseEnemy()
{

}

void BaseEnemy::Update()
{
	std::cout << "Update" << std::endl;
}

void BaseEnemy::Attack()

{
}

void BaseEnemy::Draw()
{
}

int BaseEnemy::GetHp()
{
	return m_Hp;
}


