
#include <stdio.h>

int main()
{
    
    
int a[10];
   printf("enter element of array\n");
   for(int i=0;i<10;i++){
       scanf("%d\n",&a[i]);
   }
   int count =0;
   for(int i=0; i<10/2;i++){
       if(a[i]==a[10-1-i])
       count=count +1;
       
   }
   printf("%d\n",count);
   
    return 0;
}
