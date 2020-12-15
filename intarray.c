#include <stdio.h>

int main()
{
	int n;
	printf("Size of array :");
	scanf("%d",&n);
	int array[n];
	int i;
	//printf("Size of array :");
	//scanf("%d",&n);
	printf("Elements in the array :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	for(i=0;i<n;i++)
			printf("%d",array[i]);	
	return 0;
}