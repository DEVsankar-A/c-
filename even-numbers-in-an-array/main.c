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
    printf("enter the length of  arr1");
    scanf("%d",&n);
    int arr1[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
        
    } 
    for(int i=0;i<n;i++)
    {
        if(arr1[i]%2==0)
        {
                    printf("%d ",arr1[i]);

        }
    }
      

    return 0;
}