/*To check the year is leap year or not*/
#include<iostream>
using namespace std;
main()
{
	int year;
	cout<<"Enter the year : ";
	cin>>year;
	if(year%4==0)
	{
		cout<<"It s a leap year";
	}
	else
	{
		cout<<"It is not a leap year";
	}
}
