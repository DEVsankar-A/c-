#include <stdio.h>

int main() {
    int rem, dt, temp;


    for (int i = 1; i <= 1000; i++) {
        temp = i;  
        dt = 0;    
        

        
        while (temp > 0) {
            rem = temp % 10;
            dt += rem * rem * rem; 
            temp /= 10; 
        }

       
        if (dt == i) {
            printf("%d\n", i); 
        }
    }

    return 0;
}

