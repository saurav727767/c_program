//sum of the numbers using scanf  
#include<stdio.h>
main()
{
    int a,b,c,sum;
    printf("Enter the numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    sum=a+b+c;
    printf("The sum of numbers are %d",sum);
    return 0;
}