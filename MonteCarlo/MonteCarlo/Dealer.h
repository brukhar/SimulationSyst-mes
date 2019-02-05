#ifndef DEALER_H
#define DEALER_H

#include <list>

class Dealer
{
private:
	std::list<int> absentCards;

public:
	Dealer();

	/*0 - 12 : Heart
	  13 - 25 : Diamonds
	  26 - 38 : Spike
	  39 - 51 : Clover
	*/
	int DrawNewCard(bool withReplacement);
};

#endif 