/*To find the largest and smallest element in an array*/
#include<iostream>
using namespace std;
main()
{
	int n;
	int i;
	int large,small;
	int ele[20];
	cout<<"Enter the number of elements : \n";
	cin>>n;
	cout<<"\nEnter the elements : \n";
	for(i=0;i<n;i++)
	cin>>ele[i];
	large=ele[0];
	for(i=0;i<n;i++)
	{
		if(large<ele[i])
		 large=ele[i];
	}
	small=ele[0];
	for(i=0;i<n;i++)
	{
		if(small>ele[i])
		 small=ele[i];
	}
	cout<<"The largest element is :"<<large<<"\nThe smallest element is :"<<small;
}
