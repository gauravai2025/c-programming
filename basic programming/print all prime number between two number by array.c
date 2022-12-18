
#include <stdio.h>
#include<stdlib.h>
int main() {
    
    int a[200];
    for(int i=0;i<200;i++){
        a[i]=i+1;
       
    }
    for(int k=2;k<=200;k++){
        for(int l=1;l<200;l++){
            if(a[l+k]%k==0){
            a[l+k]=0;}
        
        }
       
        
    }
    for(int j=0;j<200;j++){
       if ((a[j])!=0)
        printf("%d\n",a[j]);
    }

    return 0;
}