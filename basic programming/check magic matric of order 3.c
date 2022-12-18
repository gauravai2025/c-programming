// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>

   //For diagonal elements
   int check_magic(int a[][3],int x,int y){
  int sum = 0,flag;
  int i=0,j=0;
   for (i = 0; i < 3; i++) {
      for (j = 0; j < 3; j++) {
         if (i == j)
            sum = sum + a[i][j];
      }
   }
 
   //For Rows
   for (i = 0; i < 3; i++) {
     int sum1 = 0;
      for (j= 0; j < 3; j++) {
         sum1 = sum1 + a[i][j];
      }
      if (sum == sum1)
         flag = 1;
      else {
         flag = 0;
         break;
      }
   }
 
   //For Columns
   for (i = 0; i < 3; i++) {
     int sum2 = 0;
      for (j = 0; j < 3; j++) {
         sum2 = sum2 + a[j][i];
      }
      if (sum == sum2)
         flag = 1;
      else {
         flag = 0;
         break;
      }
      return flag;
   }
 
  
 
  }

int main() {
     int a[3][3];
    printf("enter matrix element by row\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
   
   int g=check_magic(a,3,3);
   if(g==1)
   printf("magic matrix");
   else
   printf("not magic matrix");




    return 0;
}