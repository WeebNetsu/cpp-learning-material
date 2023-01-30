#include <iostream>

using namespace std;

class Enemy
{
public:
	void setAttackPower(int atk){
		attackPower = atk;
	}

protected: //like private but can be used by child
	int attackPower;
};

class Ninja : public Enemy
{
public:
	void attack(){
		cout << "I am ninja, chop! (-" << attackPower << ")\n";
	};
};

class Monster : public Enemy
{
public:
	void attack(){
		cout << "You look tasty! (-" << attackPower << ")\n";
	};
};

int main(){
	//polymorphism is when you rewrite a function that gets inherited for different classes
	//in this case it is attack()
	Ninja n;
	Monster m;

	Enemy *enemy1 = &n; //so we can use ->
	Enemy *enemy2 = &m;

	enemy1->setAttackPower(20);
	enemy2->setAttackPower(50);

	n.attack();
	m.attack();

	return 0;
}