// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
    // Write C code here
char name[132];
int count=0,i=0;
printf("enter string\n");
fgets(name,sizeof(name),stdin);
while(i<=120 ){
    if(name[i]==NULL)
    break;
    count =count+1;
    i=i+1;
}
printf("%d",count-1);


    return 0;
}