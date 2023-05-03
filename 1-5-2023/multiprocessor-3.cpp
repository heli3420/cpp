#include<iostream>
using namespace std;

class math{
	public:
		void sum(int a,int b)
		{
			cout<<"sum : "<<a+b<<endl;
		}
	};
		class math2 : public math{
			public:
				void sum(int a,int b){
						cout<<"sum of : "<<a<<"and"<<b<<"="<<a+b<<endl;	
			}
		
		
};
int main(){
	math2 m;
	m.sum(11,22);
}
