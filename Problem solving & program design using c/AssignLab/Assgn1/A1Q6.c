/*
Problem : Compute the time required to cut the grass at the rate of two square feet a second.

Analysis:  
*/

#include<stdio.h>
void main(){
        double len_yard, wid_yard, len_house, wid_house, area_yard,area_house, time;
        printf("Enter the length and width of the yard: ");
        scanf("%lf %lf", len_yard, wid_yard);
        printf("Enter the length and width of the house: ");
        scanf("%lf %lf", len_house, wid_house);
        area_yard = len_yard * wid_yard;
        area_house = len_house * wid_house;
        time = (area_yard-area_house)/2;
        printf("%f",time);
}
