/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[100];
    int i,n,j,temp;
    printf("Enter array size: ");
    scanf("%d",&n);
    printf("Enter the array elements: \n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
   
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
        // printf("%d ",a[i]);
    }
    printf("Reversed array is:\n");
    for(i=0;i<n;i++)
        {
            printf("%d ",a[i]);
        }
        return 0;
}
