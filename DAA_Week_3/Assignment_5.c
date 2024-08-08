/*
WEEK 3-2 NEELIMA:
Imagine you are working for a retail store that sells a wide variety of products. The
store has a vast inventory with thousands of items, and it's becoming challenging for
the employees to manage and locate products efficiently. Customers often ask for
specific items, and employees need to find them quickly. The sorting program's
primary goal is to organize the products in the inventory systematically, allowing for
faster and easier access to items when needed.
Implement an efficient sorting algorithm to arrange the products based on product
IDs.
*/

#include<stdio.h>

struct products{
	char p_name[100];
	int p_id;
	float cost;
};

void sort(struct products p1[], int n) {
    int i, j, indx;
    struct products temp;
    for (i=0;i<n-1;i++) {
        indx=i;
        for (j=i+1;j<n;j++) {
            if (p1[j].p_id<p1[indx].p_id) {
                indx=j;
            }
        }
        temp=p1[indx];
        p1[indx]=p1[i];
        p1[i]=temp;
    }
}

int main(){
	int i,n;
	printf("Enter size:\n");
	scanf("%d",&n);
	struct products p1[n];
	for(i=0;i<n;i++){
		printf("Enter %d product name,product id & cost\n",i+1);
		scanf("%s%d%f",p1[i].p_name,&p1[i].p_id,&p1[i].cost);
	}
	sort(p1,n);
	printf("After Sorting Product IDs:\n");
	for(i=0;i<n;i++){
		printf("%d\n",p1[i].p_id);
	}
	return 0;
}
