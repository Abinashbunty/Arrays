#include <stdio.h>
#include <math.h>
int Reverse(int);
int digit_count(int);
int main()
{
	int n;
	printf("Enter size of the array: ");
	scanf("%d", &n);
	int a[n], b[n];
	int i; //loop variable
	for(i=0;i<n;i++)
	{
		printf("\n Enter a number: ");
		scanf("%d", &a[i]);
	}


	for(i=0;i<n;i++)
		{
			b[i] = Reverse(a[i]);
		}

	printf("Array with its content reversed is as follows: \n");
	for(i=0;i<n;i++)
		printf("%d\n", b[i]);

	return 0;
}

int Reverse(int num)
{
	int d = 0;
	double s = 0;
	int c = digit_count(num);
	while(num>0)
		{
			d = num % 10;
			s = s + d * pow(10,(c-1));
			c--;
			num = num / 10;
		}
	int result = (int)s;
	return result;
}

int digit_count(int no)
{
	int count = 0;
	while(no>0)
	{
		count++;
		no = no / 10;
	}

	return count;
}
