/*To find sum of all the elements of the array*/
#include<iostream>
using namespace std;
main()
{
	int n,i;
	int sum=0;
	int ele[20];
	cout<<"Enter the number of elements\n";
	cin>>n;
	cout<<"\nEnter the elements\n";
	for(i=0;i<n;i++)
	{
		cin>>ele[i];
	}
	
	for(i=0;i<n;i++)
	{
		sum=sum+ele[i];
	}
	cout<<"Sum of array elements is : "<<sum;
}
