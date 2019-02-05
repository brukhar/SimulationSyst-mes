#include "pch.h"
#include "Dealer.h"

Dealer::Dealer()
{
	absentCards.clear();
}

int Dealer::DrawNewCard(bool withReplacement)
{
	int res;
	bool finished = false;
	do
	{
		res = (rand() % 52) + 1;
		finished = true;

		for (std::list<int>::iterator it = absentCards.begin(); it != absentCards.end(); ++it)
		{
			finished = finished && ((*it) != res);
		}

	} while (!finished);
	if (!withReplacement)
	{
		absentCards.push_back(res);
	}
	return res;
}