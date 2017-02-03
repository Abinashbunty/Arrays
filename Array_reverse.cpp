#include <iostream>
using namespace std;
int main()
{
	int n, i;
	cout<<"Enter number of elements of the array: "<<endl;
	cin>>n;
	int a[n];

	for(i=0;i<n;i++)
	{
		cout<<"Enter a number: ";
		cin>>a[i];
	}
	cout<<"\n\n";

	cout<<"Array in original order is as follows: \n";
	for(i=0;i<n;i++)
		cout<<a[i]<<"    ";

	cout<<"\n";
	int temp = 0;
	for(i=0;i<n/2;i++)
	{
		temp = a[i];
		a[i] = a[n-i-1];
		a[n-i-1] = temp;
	}

	cout<<"Array in reverse order is as follows: \n";
	for(i=0;i<n;i++)
		cout<<a[i]<<"    ";

	return 0;
}
