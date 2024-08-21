/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n;
    printf("enter the number of rows");
    scanf("%d",&n);
    for(int i=n;i>=1;i--)
    {
        for(int j=(n-1);j>=i;j--)
        {
             printf(" ");
        }
        for(int j=(2*i-1);j>=1;j--)
        {
            printf("*");
        }
        printf("\n");
    }    

    return 0;
}
