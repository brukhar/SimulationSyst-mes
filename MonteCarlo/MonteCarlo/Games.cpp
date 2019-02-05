#include "pch.h"
#include "Dealer.h"
#include "Games.h"
#include <iostream>
#include <algorithm>


Games* Games::instance = nullptr;

Games* Games::Get()
{
	if (instance == nullptr)
		instance = new Games();
	return instance;
}

Games::Games()
{
}

int Games::Game1()
{
	Dealer dealer;
	int card = dealer.DrawNewCard(true) % 13;
	return (card == 0) ? 1 : 0;
}

int Games::Game2()
{
	Dealer dealer;
	int firstCard = dealer.DrawNewCard(true);
	int secondCard = dealer.DrawNewCard(true);
	return (firstCard == secondCard) ? 50 : 0;
}

int Games::Game3()
{
	Dealer dealer;
	int firstCard = dealer.DrawNewCard(false);
	int secondCard = dealer.DrawNewCard(false);
	return (firstCard % 13 == secondCard % 13) ? 2 : 0;
}

int Games::Game4()
{
	Dealer dealer;
	int cards[3];
	int totalWon = 0;
	for (int i = 0; i < 3; i++)
	{
		cards[i] = dealer.DrawNewCard(false);
		if (cards[i] < 13)
			totalWon ++;
	}
	return totalWon;
}

int Games::Game5()
{
	Dealer dealer;
	int cards[5];
	bool won = false;
	for (int i = 0; i < 5; i++)
	{
		cards[i] = dealer.DrawNewCard(false);
	}

	std::sort(cards, cards + 5);

	for (int i = 0; i < 3; i++)
	{
		won = won || ((cards[i] % 13 == cards[i+2] % 13 - 2) && (cards[i]== cards[i+2] - 2));
	}

	return won ? 5 : 0;
}
