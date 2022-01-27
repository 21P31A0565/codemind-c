#include<stdio.h>
int main()
{
   int length, breadth,width, cost ,nlength, nbreadth,fence,cost_fence;
   scanf("%d", &length);
   scanf("%d", &breadth);
   scanf("%d", &width);
   scanf("%d", &cost);
   nlength=length+(2*width);
   nbreadth=breadth+(2*width);
   fence=(nlength *nbreadth)-(length*breadth);
   cost_fence=fence*cost;
   printf("%d",cost_fence);
   return (0);
}