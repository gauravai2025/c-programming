#include<stdio.h>
#include<stdlib.h>
int main(){
    int a,b,c;
    printf("enter 3 numbers\n");
    scanf("%d%d%d\n",&a,&b,&c);
    (a>b)?((a>c)?printf("%d is largest\n",a):printf("%d is largest \n",c)):((b>c)?printf("%d is largest\n",b):printf("%d is largest\n",c));
    return 0;
}