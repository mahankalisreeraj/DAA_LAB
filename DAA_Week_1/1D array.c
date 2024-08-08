
#include<stdio.h>
int main() {
  int m,i,j,sum[4],diff[4],mul[4];
  printf("Enter size of arrays:\n");
  scanf("%d",&m);
  int a[m],c[m];
  printf("Enter array 1:\n");
  for(i=0;i<m;i++){
  	scanf("%d",&a[i]);
  }
  printf("Enter array 2:\n");
  for(i=0;i<m;i++){
  	scanf("%d",&c[i]);
  }
  for(i=0;i<4;i++){
    sum[i]=a[i]+c[i];
  }
  printf("Addition of two arrays:\n");
  for(i=0;i<m;i++){
    printf("%d\t",sum[i]);
  }
  printf("\nSubtraction of two arrays:\n");
  for(i=0;i<m;i++){
      diff[i]=a[i]-c[i];
  }
  for(i=0;i<m;i++){
    printf("%d\t",diff[i]);
  }
  return 0;
}
