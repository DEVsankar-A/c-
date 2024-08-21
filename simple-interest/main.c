/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int p,r;
    float t;
    printf("enter the value of p:");
    scanf("%d",&p);
    printf("enter the value of r:");
    scanf("%d",&r);
    printf("enter the value of t:");
    scanf("%f",&t);
    float si=(p*t*r)/100;
    printf("simple interst:%f",si);

    return 0;
}
