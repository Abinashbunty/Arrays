#include <stdio.h>
int main()
{
int n;
printf("Enter the size of array: ");
scanf("%d", &n);
int a[n];
int i, j; //loop variable
for(i=0;i<n;i++)
{
printf("\n Enter a number: ");
scanf("%d", &a[i]);
}

int c = 0; //counter variable
int num = 0;
for(j=0;j<n;j++)
	{
		num = a[j];
		c = 0;
		for(i=1;i<=num;i++)
		{
			if(num%i==0)
				c++;
		}
		if(c==2)
			printf("\n %d is a prime number", num);
		else
			printf("\n %d is not a prime number", num);
	}
	return 0;
}
