#include "TradePosition.h"

void BussinessLogics::TradePosition::setNameOfProduct(std::string& nameOfProduct)
{
	this->nameOfProduct_ = nameOfProduct;
}

std::string BussinessLogics::TradePosition::getNameOfProduct()
{
	return nameOfProduct_;
}

void BussinessLogics::TradePosition::setQuantity(int& quantity)
{
	this->quantity_ = quantity;
}

int BussinessLogics::TradePosition::getQuantity()
{
	return quantity_;
}

void BussinessLogics::TradePosition::setTimeOfRealization(int& timeOfRealization)
{
	this->timeOfRealization_ = timeOfRealization;
}

int BussinessLogics::TradePosition::getTimeOfRealization()
{
	return timeOfRealization_;
}

void BussinessLogics::TradePosition::setCost(double& cost)
{
	this->cost_ = cost;
}

double BussinessLogics::TradePosition::getCost()
{
	return cost_;
}