#include<stdio.h>
int main(){
        double beg_reading, end_reading , reim_cal,diff;
        printf("MILEAGE REIMBURSMENT CALCULATOR \n");
        printf("Enter beginning odometer reading => ");
        scanf("%lf", &beg_reading);
        printf("Enter ending odometer reading => ");
        scanf("%lf", &end_reading);
        diff = end_reading - beg_reading;
        reim_cal = diff * 0.35;
        printf("You travelled %.1f miles.\t At $0.35 per mile, \n your reimbursement is $%.2f.", diff,reim_cal);
        return(0);
}
