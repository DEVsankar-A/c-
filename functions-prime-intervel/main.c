/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int prime(int a)
{

    
    for(int i=2; i<a/2; i++){
        if(a%i != 0){
            continue;
        }
        else{
            return 1;
        }
    }
    return 0;
    
}
int main()
{
    int a,b,res=0;
    printf("enter the intervels:");
    scanf("%d%d",&a,&b);
    
    
    for(int i=a;i<=b;i++)
    {
        res=prime(i);
        if(res==0)
        {
            printf("%d\n",i);
        }
    }
}

