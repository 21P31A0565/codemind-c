#include <stdio.h>   
int main()   
{   
 int i, n, Sum = 0 ;      
 scanf("%d", &n) ;   
 for(i = 1 ; i < n ; i++)   
  {   
   if(n % i == 0)   
     Sum = Sum + i ;   
  }    
 if (Sum == n)   
    printf("True") ;   
 else   
    printf("False") ;   
}