/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
  float f,c;
  printf("enter temprature in fahrenheit:");
  scanf("%f",&f);
  c=(f-32)*5/9;
  printf("temprature in celsius:%.2f\n",c);

    return 0;
}
