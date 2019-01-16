#include<stdio.h>
int main()
{
	int arr[100],n,i,z;
	printf("Enter number of values : : : ");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		printf("Number[%d]= ",i);
		scanf("%d",&arr[i]);
	}
	printf("The unsorted numbers are : ");
	for(i=1; i<=n; i++)
	{
		printf("\t%d",arr[i]);
	}
	for(z=1; z<=n; z++)
	{
		for(i=1; i<=n; i++)
		{
			if(arr[z]<arr[i])
			{
				int c;
				c=arr[z];
				arr[z]=arr[i];
				arr[i]=c;
			}
		}
    }
    printf("\n\n");
	for(i=1; i<=n; i++)
	{
		printf("\t%d",arr[i]);
	}
	  	 	
}
