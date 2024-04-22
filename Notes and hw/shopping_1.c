#include<stdio.h>

int main(){
	int money = 10;//how much money we have, change this value to see different results
	int price = 20;//how much an item costs
	int items_in_inventory = 3;//number of items in inventory
	printf("Change value of money in code to see difference\n\n");
	printf("Money:%d\nItems in Inventory:%d\n",money,items_in_inventory);

	if(money>=price){
		money = money - price;
		items_in_inventory++;//+1 to original value
		printf("Bought 1 item\n");
	}
	else{
		printf("No money!!! D:\n");
	}

	printf("\nMoney:%d\nItems in Inventory:%d\n",money,items_in_inventory);

	if(items_in_inventory>0){
		money += price;//money = money + price
		items_in_inventory--;//-1 to original value
		printf("Sold 1 item\n");
	}
	else{
		printf("No items!!! D:\n");
	}

	printf("\nMoney:%d\nItems in Inventory:%d\n",money,items_in_inventory);

	return 0;
}
