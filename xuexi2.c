#include<stdio.h>
int main (void)
{
    int m,n=5;
    m=n + n++;
    printf("%d\n",m);
 printf("%d\n",n);
    return 0;
}