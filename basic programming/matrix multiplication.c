// Online C compiler to run C program online
#include<math.h>
#include <stdio.h>

#include<stdlib.h>

void stand_dev(int g[][4],int x,int y)
{
    
    for(int i=0;i<4;i++){
        double  s1=0;
        
        for(int j=0;j<4;j++){
            
            
              double s1=s1+g[i][j];
                 //printf("%f\n",s1);
              
        }
     
     double mean=s1/4.0;
     
              double k=s1-mean;
               
              double h=pow(k,2);
               
              double s=h/4.0;
               
              double deviation=sqrt(s);
            printf("standard deviation of %d row is:%f\n",i+1,deviation);
}
}
int sum_diagonal(int g[][4],int x,int y){
	int sum=0;
	for(int i=0;i<4;i++){
        
        for(int j=0;j<4;j++){
			if(i==j)
		 sum+=g[i][j];}
	}
	int s2=g[1][3]+g[2][2]+g[3][1];
	printf("sum of element of secondary diagonal:%d\n",s2);
		 return sum;
}
void get_symmetry(int g[][4],int x,int y){
    printf("symmetry array of element are:\n");
    for(int i=0;i<4;i++){
      for(int j=0;j<4;j++){
          if(g[i][j]==g[j][i])
          printf("%d\n",g[i][j]);}
    }
}
void verif(int g[][4],int x,int y){
    // computing the transpose
    int transpose[4][4];
  for (int i = 0; i < 4; ++i){
    for (int j = 0; j < 4; ++j) {
       transpose[j][i] = g[i][j];
  }
  }

  // printing the transpose
  printf("\nTranspose of the matrix:\n");
  for (int i = 0; i < 4; ++i){
      for (int j = 0; j < 4; ++j) {
          printf("%d  ", transpose[i][j]);
  
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
int s=sum_diagonal(g,4,4);
printf("sum of principal diagonal:%d\n",s);
get_symmetry(g,4,4);
verif(g,4,4);
    return 0;
}