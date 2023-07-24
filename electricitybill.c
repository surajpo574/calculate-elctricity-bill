// C Program to Calculate Electricity Bill

#include <stdio.h>

int main()
{
    int previous,present,units;
    float amount, charge, total_amount;
    
    // Asking for input from User 
   
    printf("\nEnter present units: ");
    scanf("%d", &present);
    
     printf("\nEnter previous units: ");
    scanf("%d", &previous);
    
   
    units = present-previous;
    printf("\n Consumed unit = %d",units);
    
    // Calculating electricity bill
    if ( units <= 20)
	{
        amount=30;
        charge=150;
     
    }
    else if (units <= 150)
	{
        amount = (units * 6)+30 ;
         charge = 150;
   
    }
    else if (units <= 300)
	{
        amount = (units * 8)+30 ;
         charge = 150;
    }
    else
	{
        amount = (units * 10)+30 ;
         charge = 150;
    }
    
    // Displaying output of the total bill
    total_amount = amount +  charge;
    printf("\nThe total Electricity Bill: Rs.%.2f", total_amount);
    
    return 0;
}
