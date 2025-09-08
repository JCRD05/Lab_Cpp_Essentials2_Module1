#include <iostream>
#include "ShopItemOrder.h"

int main()
{
	ShopItemOrder White_TShirt("T-shirt mens white size L", 4.99, 3);
	ShopItemOrder Blue_Jeans("Jeans mens blue size L", 8.99, 2);

	White_TShirt.printOrder();
	Blue_Jeans.printOrder();
}