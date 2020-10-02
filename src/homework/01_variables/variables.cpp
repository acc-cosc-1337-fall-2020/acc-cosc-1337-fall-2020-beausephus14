#include "variables.h"

const double tax_rate = .0675;

double get_sales_tax_amount(double meal_amount)
{
	return tax_rate * meal_amount;
}

double get_tip_amount (double meal_amount, double tip_rate)
{
	return meal_amount * tip_rate; 
}

 




