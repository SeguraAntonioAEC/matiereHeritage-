#include "main.h"
#include "Enemy1.h"
#include "Enemy2.h"
#include <vector>
#include <iostream>

void main()
{
	std::vector<BaseEnemy*> enemies = std::vector<BaseEnemy*>();
	enemies.push_back(new Enemy1(100));
	enemies.push_back(new Enemy2(200));

	for (auto iter = enemies.begin(); iter != enemies.end(); iter++)
	{
		(*iter)->Update();
	}	
};