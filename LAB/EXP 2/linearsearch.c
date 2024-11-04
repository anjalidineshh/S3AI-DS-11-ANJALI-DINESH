#include<stdio.h>
void main()
{
	int a[50],search,i,found=0,n;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	printf("Enter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("The element to search:");
	scanf("%d",&search);
	for(i=0;i<n;i++)
	{
		if(a[i] == search)
		{
			found = 1;
			break;
		}
	}
	if (found)
	{
		printf("The element found at position %d.",i+1);
	}
	else
	{
		printf("The element is not found.");
	}
}	
