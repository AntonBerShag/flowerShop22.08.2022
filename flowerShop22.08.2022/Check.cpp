#include "Check.h"

BusinessLogic::Check::Check()
{
}

void BusinessLogic::Check::setId(int id)
{
	this->id = id;
}

int BusinessLogic::Check::getId() const
{
	return id;
}

void BusinessLogic::Check::setPrice(int price)
{
	this->price = price;
}

int BusinessLogic::Check::getPrice() const
{
	return price;
}

