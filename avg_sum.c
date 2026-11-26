#include  <stdio.h>
int main(){
    int a,b,c,d,sum;
    float average;
    printf("Enter the first number");
    scanf("%d",&a);
    printf("Enter the second number");
    scanf("%d",&b);
    printf("Enter the third number");
    scanf("%d",&c);
    printf("Enter tge fourth number");
    scanf("%d",&d);
    sum=a+b+c+d;
    average=sum/4.0;
    printf("Total sum=%d\n",sum);
    printf("average=%.2f",average);
    return 0;
}