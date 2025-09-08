#include "ShopItemOrder.h"

ShopItemOrder::ShopItemOrder(const std::string& itemName, float itemPrice, int itemsOrdered)
{
	this->itemName = itemName;
	this->itemPrice = itemPrice;
	this->itemsOrdered = itemsOrdered;
}

std::string ShopItemOrder::getItemName(){ return itemName; }

void ShopItemOrder::setItemName(const std::string& name){ itemName = name; }

float ShopItemOrder::getItemPrice(){ return itemPrice; }

void ShopItemOrder::setItemPrice(float price){ itemPrice = price; }

int ShopItemOrder::getItemsOrdered(){ return itemsOrdered; }

void ShopItemOrder::setItemsOrdered(int number) { itemsOrdered = number; }

float ShopItemOrder::getOrderPrice(){ return itemsOrdered * itemPrice; }

void ShopItemOrder::printOrder()
{
	std::cout << itemsOrdered << " x \"" << itemName << "\" = " << getOrderPrice() << "$\n";
}
