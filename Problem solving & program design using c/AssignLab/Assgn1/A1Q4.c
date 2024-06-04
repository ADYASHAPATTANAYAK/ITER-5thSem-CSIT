/*
Problem: To find temperature in celsius 

Analysis: To solve this we need temperature in fahrenheit , then we have to subtract 32 and multiply 5/9

DATA REQUIREMENTS:
        Problem Input
                int fahrenheit  //temperature in degrees Fahrenheit 
        Problem Output
                double celsius  //temperature in degrees Celsius 
Intial Algorithm : 
        Step1: Store temperature in fahrenheit
        Step2: subtract 32 from temperature in fahrenheit and multiply 5/9
        
Implementation:
*/

#include<stdio.h>
void main(){
        int fahrenheit;
        double celsius;
        printf("Enter the temperature in fahrenheit: ");
        scanf("%d",&fahrenheit);
        celsius = (double)5/9*(fahrenheit-32);
        printf("%.2f",celsius);
}

