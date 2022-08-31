#include "Bouquet.h"

void BusinessLogic::bouquet::setCountOfFlowers(int countOfFlowers)
{
	this->countOfFlowers = countOfFlowers;
}

int BusinessLogic::bouquet::getCountOfFlowers() const
{
	return countOfFlowers;
}
