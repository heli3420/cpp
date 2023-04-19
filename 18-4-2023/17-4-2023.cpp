#include<iostream>
using namespace std;
class t1
{
	private:
		int h,m,s;
	public:
		void setdata()
		{
			cout<<"enter h: ";
			cin>>h;
			cout<<"enter m: ";
			cin>>m;
			cout<<"enter s: ";
			cin>>s;
		}
		void getdata()
		{
			cout<<"time:1\t"<<h<<":"<<m<<":"<<s<<endl;
		}
		friend void calculate();
};
class t2
{
	private:
		int h,m,s;
	public:
		void setdata()
		{
			cout<<"enter h: ";
			cin>>h;
			cout<<"enter m: ";
			cin>>m;
			cout<<"enter s: ";
			cin>>s;
		}
		void getdata()
		{
			cout<<"time:2\t"<<h<<":"<<m<<":"<<s<<endl;
		}
		friend void calculate();
};
void calculate()
{
	t1 a;
	t2 b;
	
	int h,m,s;
	
	a.setdata();
	b.setdata();
	
	h=a.h+b.h;
	m=a.m+b.m;
	s=a.s+b.s;
	
	while(s>=60)
	{
		s-=60;
		m++;
	}
	while(m>=60)
	{
		m-=60;
		h++;
	}
	a.getdata();
	b.getdata();
	
	cout<<"final time\t : "<<h<<":"<<m<<":"<<s<<endl;
}
int main()
{
	calculate();
}
