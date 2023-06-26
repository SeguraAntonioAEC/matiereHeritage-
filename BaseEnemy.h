#pragma once

class BaseEnemy
{
public:
	BaseEnemy(const int hp);
	virtual ~BaseEnemy();

	void Update();
	virtual void Attack();
	void Draw();
	int GetHp();

protected:

	int m_Hp;

private:

};

