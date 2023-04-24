#include<iostream>
using namespace std;

class x{
	protected:
		int a;
		int b;
		int c;
	
};

class y : public x{
	public:
		void setdata()
		{
			cout<<"enter value of a : ";
			cin>>a;
			cout<<"enter value of b : ";
			cin>>b;
			cout<<"enter value of c : ";
			cin>>c;
			
		}
		void getdata()
		{
			cout<<"a is : "<<a<<endl;;
			cout<<"b is : "<<b<<endl;
			cout<<"c is : "<<c<<endl;
		}
	
	
};

int main()
{
	y a;
	a.setdata();
	a.getdata();

}
