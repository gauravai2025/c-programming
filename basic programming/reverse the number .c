#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int n,num,rev_num=0;
    printf("enter number of digit \n");
    scanf("%d\n",&n);
    printf("enter mumber\n");
    scanf("%d\n",&num);
    while(n>0){
        int i=0;
        int last_digit=n%10;
        rev_num+= last_digit*pow(10,n-i);
        n=n/10;
        i+=1;
    }

if(num==rev_num)
printf("both are equal\n");
else
printf("not equal\n");

    
}