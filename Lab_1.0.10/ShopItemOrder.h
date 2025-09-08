#include <iostream>
#pragma once
class ShopItemOrder
{
private:
	std::string itemName;
	float itemPrice;
	int itemsOrdered;

public:
	ShopItemOrder(const std::string& itemName, float itemPrice, int itemsOrdered);
	std::string getItemName();
	void setItemName(const std::string& name);
	float getItemPrice();
	void setItemPrice(float price);
	int getItemsOrdered();
	void setItemsOrdered(int number);
	float getOrderPrice();
	void printOrder();
};

