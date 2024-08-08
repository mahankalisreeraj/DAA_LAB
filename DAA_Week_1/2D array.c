
#include<stdio.h>
int main(){
  int m,n,p,q,i,j,k=0;
  printf("Enter size of first array:\n");
  scanf("%d%d",&m,&n);
  int a[m][n],c[m][n],mul[m][n],add[1][2],diff[m][n];
  printf("Enter values of matrix 1:\n");
  for(i=0;i<m;i++){
    for(j=0;j<n;j++){
      scanf("%d",&a[i][j]);
    }
  }
  printf("Enter values of matrix 2:\n");
  for(i=0;i<m;i++){
    for(j=0;j<n;j++){
      scanf("%d",&c[i][j]);
    }
  }
   for (i=0;i<m;i++) {
        for (j=0;j<n;j++) {
            mul[i][j]=0;
            add[i][j]=0;
            diff[i][j]=0;
        }
    }
  for(i=0;i<m;i++){
    for(j=0;j<n;j++){
      for(k=0;k<m;k++){
        mul[i][j]=mul[i][j]+(a[i][k]*c[k][j]);
      }
        }
          }
 printf("Multiplication of above matrices are:\n");
  for(i=0;i<m;i++){
    for(j=0;j<n;j++){
      printf("%d\t",mul[i][j]);
    }
    printf("\n");
  }
  for(i=0;i<m;i++){
    for(j=0;j<n;j++){
      add[i][j]=a[i][j]+c[i][j];
      diff[i][j]=a[i][j]-c[i][j];
    }
  }
  printf("\n\nAddition of two arrays:\n");
  for(i=0;i<m;i++){
    for(j=0;j<n;j++){
      printf("%d\t",add[i][j]);
    }
    printf("\n");
  }
  printf("\n\nDifference of two arrays:\n");
  for(i=0;i<m;i++){
    for(j=0;j<n;j++){
      printf("%d\t",diff[i][j]);
    }
    printf("\n");
  }
  return 0;
}
