#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int a,n;
	cout<<"enter array length : ";
	cin >> n;
	int j,i;
	int arr[n];
	for(i=0;i<n;i++)
	{
		cin >>arr[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=i;j<=arr[i];j++)
		{
			if(j*j==arr[i])
			{
				cout<<"the sequre root of : "<<arr[i];
				cout<<" is : "<<j<<endl;
			}
		}
	}

	
}
