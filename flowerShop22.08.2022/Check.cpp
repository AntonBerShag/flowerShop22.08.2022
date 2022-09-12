#include "Check.h"

void BusinessLogic::Check::setTime(std::string time)
{
	this->time_ = time;
}

std::string BusinessLogic::Check::getTime() const
{
	return time_;
}

void BusinessLogic::Check::setCounterparty(std::string counterparty)
{
	this->counterparty_ = counterparty;
}

std::string BusinessLogic::Check::getCounterparty() const
{
	return counterparty_;
}

