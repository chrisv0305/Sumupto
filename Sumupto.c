#include<stdio.h>

int sum(int x)
{
    int y;
    y=0;
    int i;

    for(i=0; i<=x; ++i)
    {
        y=y+i;
    }
    if (x<0)
    return 0;
    else return y;
}

int main()
{
   int x;
   scanf("%i", &x);
    printf("%i", sum(x));
    return 0;
}