#include<stdio.h>
int main(){
        double time_failure, elapsed_time,hour, min;
        printf("Enter the time of power failure=> ");
        scanf("%lf%lf" , &hour,&min);
        min = (hour*60)+ min;
        time_failure =min/60;
        elapsed_time = ((4*time_failure*time_failure)/(time_failure+2))-20;
        printf("T = %.2f",elapsed_time);
        return(0);
}
