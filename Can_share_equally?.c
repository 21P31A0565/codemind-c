#include<stdio.h>
int main()
{
    int x,y,total;
    scanf("%d",&x);
    scanf("%d",&y);
    total=(x*1)+(y*2);
    if(x==0&&y==0)
    {
        printf("YES");
    }
    else if(x==0&&y%2!=0)
    {
        printf("NO");
    }
    else if(total%2==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}