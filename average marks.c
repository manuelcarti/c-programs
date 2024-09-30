//averege marks of three subjects
#include <stdio.h>

int main() {
    int maths,physics,chemistry,average;
    
    
    printf("enter the marks of maths,physics and chemistry: ");
    scanf("%d%d%d",&maths,&physics,&chemistry);
    
   average= (maths+physics+chemistry)/3;
   printf("the average marks is %d");
   
   if(average>70){
       printf("gradeA");
}else(average>=40);{
    printf("gradeB");
}
  
    
  

    return 0;
}
