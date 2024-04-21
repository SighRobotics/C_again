#include<stdio.h>

int main(){
	int money = 7;//how much money we have, change this value to see different results
	int price_expensive = 80;//how much an item costs
	int price_cheap = 20;
	int items_in_inventory = 3;//number of items in inventory
	printf("Change value of money in code to see difference\n\n");
	printf("\nMoney:%d  Items in Inventory:%d\n",money,items_in_inventory);

	if(money>=price_expensive){
		money = money - price_expensive;
		items_in_inventory++;//+1 to original value
		printf("Bought 1 expensive item\n");
		printf("\nMoney:%d  Items in Inventory:%d\n",money,items_in_inventory);
	}
	if(money >= price_cheap){//chaning this to else if will skip entire section if first section is true
		money = money - price_cheap;
		items_in_inventory++;//+1 to original value
		printf("Bought 1 cheap item\n");
		printf("\nMoney:%d  Items in Inventory:%d\n",money,items_in_inventory);
	}
	
	else{
		printf("No money!!! D:\n");
	}

	printf("\nMoney:%d  Items in Inventory:%d\n",money,items_in_inventory);

	return 0;
}
