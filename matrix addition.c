#include<stdio.h>
int main() {
  int rows, cols;
  printf("enter the number of rows and columns:");
  scanf("%d %d", &rows, &cols);
  int a[rows][cols], b[rows][cols], sum[rows][cols];
  printf("enter element elemets of matrix A:\n");
  for (int i= 0; i<rows;i++){
    for (int j=0; j<cols;j++){
      scanf("%d",&a[i][j]);
      
    }
  } 
  printf("enter element elemets of matrix B:\n");
  for (int i= 0; i<rows;i++){
    for (int j=0; j<cols;j++){
      scanf("%d",&b[i][j]);
    }
}
  for(int i=0;i<rows;i++){
    int j=0;j<cols;j++){
    sum[i][j]=a[i][j]+b[i][j];
      
    }
  }
  printf("Resultant Matrix:\n");
  for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){
      printf("%d",sum[i][j]);
    }
  }