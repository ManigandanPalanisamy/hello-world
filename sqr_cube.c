#include<stdio.h>
#include<conio.h>
int main()
{
	int a[20],i=0,n;
	printf("Enter limit\n");
	scanf("%d",&n);
	printf("Enter the array values: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i%2==0)
		{
			a[i]=a[i]*a[i]*a[i];
		}
		else
		{
			a[i]=a[i]*a[i];
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	getch();
	return 0;
}
	