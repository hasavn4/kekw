#include <stdio.h>

int max(int a, int b)
{
    return a > b ? a : b;
}

int min(int a, int b)
{
    return a > b ? b : a;
}

int kekw(int (*ptr)(int,int),int a,int b)
{
    return ptr(a,b);
}


int main()
{
    printf("max : %d\n",kekw(max,5,10));
    printf("min : %d\n",kekw(min,5,10));
    return 0;
}