/*To check whether two strings are anagram*/
#include<iostream>
#include<string.h>
using namespace std;
main()
{
	char str1[50],str2[50];
	int len,len1,len2,i,j,found=0,notfound=0;
	cout<<"Enter the first sting :\n";
	gets(str1);
	cout<<"Enter the second string :\n";
	gets(str2);
	len1=strlen(str1);
	len2=strlen(str2);
	if(len1==len2)
	{
		len=len1;
		for(i=0;i<len;i++)
		{
			found=0;
			for(j=0;j<len;j++)
			{
				if(str1[i]==str2[j])
				{
					found=1;
					break;
				}
				
			}
			if(found==0)
			{
				notfound=1;
				break;
			}
		}
		if(notfound==1)
		{
			cout<< str1 <<" and "<< str2 <<" are not  anagram ";
		}
		else
		 cout<< str1 <<" and "<< str2 <<" are  anagarm";
	}
	else
	{
		cout<<"Two strings must have same number of characters to check or to be anagram or not";
	}
}
