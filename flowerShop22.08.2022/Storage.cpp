#include "Storage.h"

void BusinessLogic::storage::setCountActiveProduct(int countActiveProduct)
{
	this->countActiveProduct = countActiveProduct;
}

int BusinessLogic::storage::getCountActiveProduct() const
{
	return countActiveProduct;
}
