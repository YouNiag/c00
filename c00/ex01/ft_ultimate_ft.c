#include<stdio.h>
#include<unistd.h>

void ft_ultimate_ft(int *********nbr)
{
    *********nbr = 42;
}

int main()
{   
    int a;
    int *********nbr;
    int ********nbr8;
    int *******nbr7;
    int ******nbr6;
    int *****nbr5;
    int ****nbr4;
    int ***nbr3;
    int **nbr2;
    int *nbr1;
    nbr=&nbr8;
    nbr8=&nbr7;
    nbr7=&nbr6;
    nbr6=&nbr5;
    nbr5=&nbr4;
    nbr4=&nbr3;
    nbr3=&nbr2;
    nbr2=&nbr1;
    nbr1=&a;

    ft_ultimate_ft(nbr);
    printf("%d", a); 
}