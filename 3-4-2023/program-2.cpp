#include<iostream>
using namespace std;
int main()
{
	int i ,n,leapyear;
	n=(((3030-2020)-2)/4)+1;
	int a[n],j;

		for(i=2020,j=0; i<=3030; i+=4)
	{
		if (i%4==0)
		{
		
		a[j]=i;
		j++;
	   }
	
	}
	for (i=0; i<n; i++)
	{
		cout<<""<<a[i]<<endl;
	}
}
