/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,i;
    printf("enter the numbers");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            printf("%d\n",i);
            
        }
    }

    return 0;
}
