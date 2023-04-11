#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int n,i,a[5];
	int b[5];
	for(i=0; i<5; i++)
	{
		cout<<"enter the number : ";
		cin>> a[i];
	}
	for(i=0; i<5; i++)
	{
		b[i]=a[i]*a[i]*a[i];
		cout<<" "<<b[i];
	}
}
