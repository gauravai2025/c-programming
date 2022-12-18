// Online C compiler to run C program online
#include<math.h>
#include <stdio.h>

#include<stdlib.h>

void stand_dev(int g[][4],int x,int y)
{
    for(int i=0;i++;i<4){
        double  s1=0;
        for(int j=0;j<4;j++){  
              double s1=s1+g[i][j];
              double mean=s1/4.0;
              double k=s1-mean;
              double h=pow(k,2);
              double s=h/4.0;
              double deviation=sqrt(s);
            printf("standard deviation of %d row is:%f\n",i+1,deviation);
}
}
}
int main() {
  int g[4][4];
  printf("enter square matrix of order 4 row wise\n");
  for(int i=0;i<4;i++){
      for(int j=0;j<4;j++){
          scanf("%d\t",&g[i][j]);
      }
      printf("\n");
  }
stand_dev(g,4,4);
    return 0;
}