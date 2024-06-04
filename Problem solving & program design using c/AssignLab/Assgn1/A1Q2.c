


#include <stdio.h>
int main(){
        double height, flow,work , power;
        printf("Enter the height of the dam=> ");
        scanf("%lf", &height);
        printf("Enter the cubic meters of water=> ");
        scanf("%lf", &flow);
        work = (flow*1000)*9.80*height;
        power = work*0.9;
        power = power / 1000000;
        printf("%.2f MW of power will be produced",power);
        return (0);
}
