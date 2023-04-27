#include<iostream>
using namespace std;

class calculat 
{
public:
	void division(int a ,int b)
	{
		cout<<"division is : "<<a/b<<endl;
	}
	void sub(int a,int b, int c)
	{
		cout<<"sub is : "<<a-b-c<<endl;
	}
	void multiplication(int a,int b,int c,int d)
	{
		cout<<"multiplication : "<<a*b*c*d<<endl;
		
	}
	void addition(int a,int b,int c,int d,int e)
	{
		cout<<"addition is : "<<a+b+c+d+e<<endl;
	}
};
	int main()
	{
		int a,b,c,d,e;
		cout<<"enter value of a : ";
		cin>>a;
		cout<<"enter value of b : ";
		cin>>b;
		cout<<"enter value of c : ";
		cin>>c;
		cout<<"enter value of d : ";
		cin>>d;
		cout<<"enter value of e : ";
		cin>>e;
		calculat x;
		
		x.division(a,b);
		x.sub(a,b,c);
		x.multiplication(a,b,c,d);
		x.addition(a,b,c,d,e);
	}
