/*To sort the elements in ascending order*/
#include<iostream>
using namespace std;
main()
{
	int n;
	int ele[50];
	int i,j;
	cout<<"Enter the number of elements :\n";
	cin>>n;
	cout<<"Enter the elements \n";
	for(i=0;i<n;i++)
	{
		cin>>ele[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(ele[j]>ele[j+1])
			{
				int temp;
				temp=ele[j];
				ele[j]=ele[j+1];
				ele[j+1]=temp;
			}
		}
	}
	cout<<"The sorted elements in ascending order is\n";
	for(i=0;i<n;i++)
	{
		cout<<ele[i]<<"\t";
	}
}
