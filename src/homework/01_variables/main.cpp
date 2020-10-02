//write include statements
#include<iostream>
#include"variables.h"

//write namespace using statement for cout

int main()
{
	double meal_amount; 
	double tip_rate;
	double tip_amount;
	double tax_amount;
	double total;
	std::cin>>meal_amount;
	tax_amount = get_sales_tax_amount(meal_amount);
	
	std::cin>>tip_rate;
	tip_amount = get_tip_amount(meal_amount,tip_rate);
	
	total = tip_amount + tax_amount + meal_amount;
	std::cout<<"Meal Amount: "<<meal_amount<<'/n';
	std::cout<<"Sales Tax: "<<tax_amount<<'/n';
	std::cout<<"Tip Amount: "<<tip_amount<<'/n';
	std::cout<<"Total: "<<total<<'/n';
}