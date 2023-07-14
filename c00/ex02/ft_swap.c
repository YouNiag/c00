#include<unistd.h>
#include<stdio.h>
void    ft_swap(int *a, int *b)
{
    int swap;
    swap= *a;
    *a=*b;
    *b=swap;
}

int main()
{
    int x=3;
    int y=9;
    ft_swap(&x,&y);
    printf("x=%d && y=%d ",x,y);
    return 0;
}