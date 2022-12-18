
#include <stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
    // Write C code here
    char a[123],b[123];
    int j=0,count=0;
    printf("enter string\n");
    fgets(a,sizeof(a),stdin);
    for(int i=0;i<=123;i++){
        if(a[i]==NULL){
            break;}
        count=count+1;
     
        
       
    }
    int k=count-1;
    while(count>0){
        b[j]=a[k];
        j=j+1;
        k=k-1;
        count=count-1;
        
    }
printf("%s",b);
    return 0;
}