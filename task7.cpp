/*To swap two numbers using functions*/
#include<iostream>
using namespace std;
void swap(int * ,int *);
main()
{
	int a,b;
	cout<<"Enter two numbers :\n";
	cin>>a>>b;
	cout<<"Before swapping \n"<<"a="<<a<<"\tb="<<b;
	swap(&a,&b);
	cout<<"\nAfter swapping \n"<<"a="<<a<<"\tb="<<b;
	
}
void swap(int*x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	
	
}
