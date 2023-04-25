#include<iostream>
using namespace std;

class a{
	protected:
	int a1;
	public:
		a(){
			cout <<"enter a: ";
			cin >> a1;
	}
};
class b :public a{
	protected:
	int b1;
	public:
		b():a()
		{
			cout <<"enter b: ";
			cin >> b1;
		}
};
class c : public a{
	protected:
	int c1;
	public:
		 c():a()
		 {
			cout <<"enter c: ";
			cin >> c1;
		}
};
class d : public b,public c{
	private:
	int d1;
	
	public:
		d():b(),c(){
			cout <<"enter d: ";
			cin >> d1;
			cout<<"sum is : "<<b::a1+b1+c1+d1<<endl;
		}
};

int main()

{
	d d1;
}



