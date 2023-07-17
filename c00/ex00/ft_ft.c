#include <unistd.h>
#include<stdio.h>
void    ft_ft(int *p)
{
    *p=42;
}

int    main()
{
    int x;
    int *p;
    p=&x;
    ft_ft(p);
    printf("%d",x);
}