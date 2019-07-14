/*To check if the given number is even or odd*/
#include<iostream>
using namespace std;
main()
{
	int n;
	cout<<"Enter the number : ";
	cin>>n;
	if(n%2==0)
	{
		cout<<"\nThe given number "<< n <<" is even";
	}
	else
	{
		cout<<"\nThe given number "<< n <<" is odd";
	}
}
