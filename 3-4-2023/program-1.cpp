#include<iostream>
using namespace std;
int main()
{
	int n,i;
	cout<< "array length: ";
	cin >> n;
	int a[n];
	for(i=0; i<n; i++)
	{
		cout<<"enter array element : ";
		cin>>a[i];
	}
	for(i=0; i<=n; i++)
	{
		if(a[i]%2==1)
		{
			cout<<"enter number is even "<<a[i]<<endl;
		}
		
	}
}
