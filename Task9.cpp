/*To convert specified days into year,weeks and days*/
#include<iostream>
using namespace std;
main()
{
	int days=1329;
	int years,weeks;
	years=days/365;
	weeks=(days%365)/7;
	days=days-((years*365)+(weeks*7));
	cout<<"Years : "<<years;
	cout<<"\nWeeks : "<<weeks;
	cout<<"\nDays : "<<days;
}
