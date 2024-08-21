/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
      int n,rem,revnumb=0,original;
    printf("enter the number");
    scanf("%d",&n);
    original=n;
    
    while(n>0)
    {
        rem=n%10;
        n=n/10;
        revnumb=(revnumb*10)+rem;
    }
    
    if(revnumb==original)
    {
        printf("the number is palindrome");
    }else
    {
        printf("the number is not palindrome");

        
    }

    return 0;
}
