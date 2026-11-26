#include <stdio.h>
int main(){
    int a,b,c,d,multiplication;
    float average;
    printf("Enter the first number");
    scanf("%d",&a);
    printf("Enter the second number");
    scanf("%d",&b);
    printf("Enter the third number");
    scanf("%d",&c);
    printf("Enter the fourth number");
    scanf("%d",&d);
    multiplication= a*b*c*d;
    average=(a+b+c+d)/4.0;
    printf("Total multiplication=%d\n",multiplication);
    printf("Average=%.2f\n",average);
    return 0;

}