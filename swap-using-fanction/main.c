/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;


}

int main()
{
    int a,b;
 printf("enter the value of a");
 scanf("%d",&a);
 printf("enter the value of b");
 scanf("%d",&b);
 printf("orginal value=%d,%d\n",a,b);
 swap(&a,&b);
  printf("swaped=%d,%d",a,b);
 
 
    return 0;
}
