#include<stdio.h>
int bubble_sort(int a[],int n);
int main()
{
	int i,n;
	printf("Enter size:\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements:\n");
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	bubble_sort(a,n);
	printf("Elements after sorting:\n");
	for(i=0;i<n;i++)
	printf("%d\n",a[i]);
	return 0;
}
int bubble_sort(int a[],int n)
{
	int i,j,temp;
	for(i=0;i<(n-1);i++)
	{
		for(j=0;j<(n-1-i);j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
