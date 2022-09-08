#include <iostream>
#include <string>
#include "Sklad.h"
#include <vector>
#include <algorithm>
#include "Sklad.h"

void BusinessLogic::storage::setCountActiveProduct(int countActiveProduct)
{
	this->countActiveProduct = countActiveProduct;
}

int BusinessLogic::storage::getCountActiveProduct() const
{
	return countActiveProduct;
}