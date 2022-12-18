#include <stdio.h>
int main(){
 int a[10];
 printf("enter array element\n");
 for(int i=0;i<10;i=i++){
     scanf("%d\n",&a[i]);
 }
 for(int i=0;i<10;i=i+2){
     int temp=a[i];
     a[i]=a[i+1];
     a[i+1]=temp;}
     for(int i=0;i<10;i++){
     printf("%d\n",a[i]);
 }
     
 