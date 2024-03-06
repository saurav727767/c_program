//area of tringle
//#include<stdio.h>
//main()
//{
  //  float b,h,area;
   // b=8.0;
    //h=6;
   // area=(b*h)/2;
   // printf("Area of triangle is = %f",area);
//}


//area of tringle three side are given
#include<stdio.h>
#include<math.h>
main()
{
   float a,b,c,area,s;
   a=6;
   b=3;
   c=5;
   s=(a+b+c)/2;
   area=sqrt(s*(s-a)*(s-b)*(s-c));
   printf("Area of Triangle is = %f",area);
}