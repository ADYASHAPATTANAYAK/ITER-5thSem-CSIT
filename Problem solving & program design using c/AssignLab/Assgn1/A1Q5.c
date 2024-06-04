/*
Problem : Estimate the magnitute  of the water saved based on community population.

Analyse:To solve this problem , we need to get the population of the community so, that we can get we can find the number of toilets 
        present in the community by dividing 3 to the population , after that we have to find the old toilet system water wasteage and
        new toilet system water wastage , then find the difference between them to get total watersaved per day . To find the cost of 
        installation we have to multiply $150 with number of toilets

Data Requirement : 
        Problem Input: 
                int population // to store the population in the community
        Problem Output:
                int water_saved // to store amount of water stored
                int cost_new_toilet //total cost of installation of new toilet
        Additional Program Variable:
                int no_of_toilets // to store no of toilets in the community
                int new_water_waste // water wasted due to new toilets
                int old_water_waste // water wasted due to old toilets
 Initial Algorithm:
        Step1: Store the population of the community
        Step2: Divide the population by 3
        Step3: Multiply liters of water wasted per flush with toilet is flushed on average how many times per day and number of toilets 
                for both new and old toilets
        Step4: Differenciate new water wasteage from old water wastage to get water saved
        Step5: Find the cost of new Toilet installation by multiplying $150 to number of toilets
Implementation:
*/
#include<stdio.h>
void main(){
        int population, no_of_toilets,new_water_waste ,old_water_waste,cost_new_toilet,water_saved;
        printf("Enter number of peoples present in the community");
        scanf("%d",&population);
        no_of_toilets= population/3;
        new_water_waste = 2*14*no_of_toilets;
        old_water_waste = 15*14*no_of_toilets;
        water_saved= old_water_waste -  new_water_waste; /*output*/
        cost_new_toilet = no_of_toilets *150; /*output*/
        printf("%d and %d",water_saved,cost_new_toilet);
}
