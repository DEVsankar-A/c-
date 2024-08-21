/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n;
    printf("enter the rows");
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=(2*i-1);j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}