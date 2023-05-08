#include<iostream>
#include<string.h>
using namespace std;


void pass(char p[],int n) {
	int count=0;
	
	for( int i=0; i<strlen(p);i++){
		if(p[i]>=65 && p[i]<=90){
			count++;
		}
	}
	string msg="not valid password please enter proper password..";
	try
	{
		if(count<=0)
		{
			throw msg;
		}
		else
		{
			cout<<"password is strong enough.."<<endl;
		}
	}
	catch(string a)
	{
		cout<<a<<endl;
	}
	catch(...)
	{
		cout<<"unhandled exception."<<endl;
	}
}

int main()
{
	int n;
	cout<<"enter the length of password : ";
	cin>>n;
	char p[n];
	cout<<"enter the password : ";
	for(int i=0; i<n; i++)
	{
		cin>>p[i];
	}
	pass(p,n);
	cout<<"the end!!"<<endl;
}
