// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>
#include<math.h>
int max_array(int a[],int d){
     int maxi=-pow(2,31);
    for(int i=0;i<d;i++){
       if(a[i]>maxi){
           maxi=a[i];
       }
    }
    return maxi;
}
int min_array(int b[],int d1){
    int min=pow(2,30);
    for(int i=1;i<d1;i++){
        if(min>b[i]){
            min=b[i];
        }
    }
    return min;
}
void multiply(int g,int h){
    printf("product:\n");
    printf("%d\n",g*h);
}
int main() {
    // Write C code here
    int k;
int a[10],b[10];
printf("enter first array:\n");
for(int i=0;i<10;i++){
    scanf("%d",&a[i]);
     
    
}

printf("enter second array:\n");
for(int i=0;i<10;i++){
    scanf("%d",&b[i]);
    
}
int s=max_array(a,10);
printf("max element of first aaray\n");
printf("%d\n",s);
int m=min_array(b,10);
printf("min element of second array\n");
printf("%d\n",m);
multiply(m,s);
    return 0;
}