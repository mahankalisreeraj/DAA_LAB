#include<stdio.h>
int selection_sort(int a[],int n);
int main()
{
	int i,n;
	printf("Enter size:\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements:\n");
	for(i=0;i<n;i++)
	    scanf("%d",&a[i]);
	selection_sort(a,n);
	printf("Elements are:\n");
	for(i=0;i<n;i++)
	    printf("%d\n",a[i]);
	return 0;	
}
int selection_sort(int a[],int n)
{
	int i,j,t,large,index;
	for(i=(n-1);i>=1;i--)
	{
		large=a[0];
		index=0;
		for(j=1;j<=i;j++)
		{
			if(large<a[j])
			{
				large=a[j];
				index=j;
			}
		}
		a[index]=a[i];
		a[i]=large;
	}
}
