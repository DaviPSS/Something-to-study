#include <stdio.h>
#include <stdlib.h>
#define DMAX 100000000


int main(void)
{
    int i, c, a, j=0; /*contador*/

    for(i=1; i<=DMAX; i++)
    {
        c=0;
        
        j+=i;
        
        for(a=1; a<=j; a++)
        {    
            if((j%a)==0)
                c++;        
        }
        if(c==500)
            break;
        
        if(c>=144)
        {
            printf("tri: %d\n", j);
            printf("div: %d\n", c);
        }
    }    
    printf("resultado eh: %d\n", j);
    
    return 0;
}




