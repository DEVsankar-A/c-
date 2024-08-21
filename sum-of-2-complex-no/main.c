/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int r1,img1,r2,img2,sr,simg;
    printf("enter the complex number real and imagenary");
    scanf("%d%d",&r1,&img1);
    printf("enter the complex number real and imagenary");
    scanf("%d%d",&r2,&img2);
    sr=r1+r2;
    simg=img1+img2;
    printf("sum=%d i%d",sr,simg);
    

    return 0;
}
