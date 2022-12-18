
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
   
    char a[121],b[119],c[250];
    int i=0,g=0,count1=0,count2=0,j=0,l=0;
    printf("enter first string\n");
    fgets(a,sizeof(a),stdin);
    printf("enter second string\n");
    fgets(b,sizeof(b),stdin);
    while(i<=121){
        if(a[i]==NULL){
            break;}
        count1=count1+1;
        i=i+1;
        
    }
       printf("%d\n",count1);
    
    while(g<=119){
        if(b[g]==NULL){
            break;}
        count2=count2+1;
        g=g+1;
      
    }
       printf("%d\n",count2);
    for(int j=0;j<count1-1;j++){
        c[j]=a[j];
    }
   // printf("%s\n",c);
    int k=count1-1;
    for(int h=0;h<count2;h++){
        c[k]=b[l];
        k=k+1;
        l=l+1;
    }
    printf("%s\n",c);
    return 0;
}