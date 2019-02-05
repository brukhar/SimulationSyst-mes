#pragma once
class Games
{
	//Singleton
public:
	static Games* Get();
private:
	Games();
	static Games *instance;

public:
	//Each one return the amount of money won thanks to the game
	int Game1();
	int Game2();
	int Game3();
	int Game4();
	int Game5();
};

