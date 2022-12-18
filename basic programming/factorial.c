#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,factorial,num;

    printf("enter  number:");
    scanf("%d",&num);

    factorial= findfactorial(num);
    printf("factorial of %d is: %d",num,factorial);
    return 0;
}
   int findfactorial(int num){
       int i,f=1;
       for(i=1;i<=num;i++)


        f=f*i;

       return f;
   }



