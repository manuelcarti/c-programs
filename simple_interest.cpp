//simple interest
#include <stdio.h>

int main() {
    double amount,rate,simpleinterest;
    int time;
    printf("enter the amount:");
    scanf("%lf",&amount);
    printf("the amount is:%.2lf\n",amount);
    
    printf("enter time:");
    scanf("%d",&time);
    printf("the time is:%d\n",time);
    
    printf("enter the rate:");
    scanf("%lf",&rate);
    printf("the rate is:%.2lf%%\n",rate);
   
   simpleinterest =(amount*time*rate)/100;
   
   printf("simpleinterest is:%.2lf\n",simpleinterest);
   
    return 0;
}
