/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,m;
    printf("enter the number:");
    scanf("%d",&a);
    for(int i=1;i<=10;i++)
    {
        m=i*a;
        printf("%d*%d=%d\n",i,a,m);
    }

    return 0;
}
