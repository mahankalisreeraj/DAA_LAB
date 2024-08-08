#include<stdio.h>
int insertion_sort(int a[],int n);
int main()
{
	int n,i;
	printf("Enter size:\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements:\n");
	for(i=0;i<n;i++)
	 scanf("%d",&a[i]);
	insertion_sort(a,n);
	printf("Elements after sorting:\n");
	for(i=0;i<n;i++)
	 printf("%d\n",a[i]);
	return 0;
}
int insertion_sort(int a[],int n)
{
	int i,j,t;
	for(i=1;i<n;i++)
	{
		t=a[i];
		for(j=(i-1);j>=0&&t<a[j];j--)
		{
				a[j+1]=a[j];
		}
		a[j+1]=t;
	}
}
