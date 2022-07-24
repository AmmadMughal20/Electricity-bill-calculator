//Program to calculate electricity bill in c

/*
Official Assignment 2: Electricity Bill Calculator (Deadline 30th July)
Program 1: Write a program to input get electricity units as input and calculate the total electricity bill based on the following table
Sr.        Units Consumed        Rate/Unit
1          From 1 to 100         Rs. 07
2          From 101  to 200      Rs. 10
3          From 201 and above    Rs. 13

Steps: 
Enter units consumed as input
Calculate units rate based on above rate table
Show the total calculated amount of bill to screen
*/

#include<stdio.h> //define the header file
void main(void)
{
    int total_units = 0;
    int slab1_units = 0;
    int slab2_units = 0;
    int slab3_units = 0;
    int electricity_bill = 0;
    
    printf("Enter number of units: ");
    scanf("%d", &total_units);
    
    if(total_units <= 100 && total_units > 0){  //if units are From 1 to 100 
    slab1_units = total_units;
    electricity_bill = slab1_units * 7;
    printf("Your electricity bill is %d\n", electricity_bill);
    }
    
    
    else if(total_units > 100 && total_units <= 200){ //if units are From 101 to 200 
    int slab1bill = 0;
    int slab2bill = 0;
    
    slab1_units = 100;
    slab2_units = total_units - slab1_units;
    
    slab1bill = slab1_units * 7;
    slab2bill = slab2_units * 10;
    
    electricity_bill = slab1bill + slab2bill;
    printf("Your electricity bill is %d\n", electricity_bill);
    }
    
    else if(total_units > 200){ //if units are From 201 and above
    int slab1bill = 0;
    int slab2bill = 0;
    int slab3bill = 0;
    
    slab1_units = 100;
    slab2_units = 100;
    slab3_units = total_units - slab1_units - slab2_units;
    
    slab1bill = slab1_units * 7;
    slab2bill = slab2_units * 10;
    slab3bill = slab3_units * 13;
    
    electricity_bill = slab1bill + slab2bill + slab3bill;
    printf("Your electricity bill is %d\n", electricity_bill);
    }
    
    else{
    printf("Your electricity bill is in credit\n");
    }
    
    
}
