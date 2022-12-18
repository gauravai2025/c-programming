#include<stdio.h>
#include<stdlib.h>
int main(){
    int a[]={-6,-12,8,13};
    int sum=0;
    float s1=0;
    for(int i=0;i<3;i++){
         
        sum+=a[i];}
        float mean=sum/4.0;
       for(int i=0;i<3;i++){
     s1+=a[i]-mean;}
     float p=pow(s1,2);
     float standard_deviation= sqrt(p)/4;
     printf("standard deviation:",standard_deviation)
;

    
}