/*Write a Program which illustrates Method Overriding by using three classes.*/
#include<iostream>
using namespace std;
class cricket{
	protected :
		int over=50;
};
class t20 : public cricket{
	public:
		void getdata(){
			cout<<"over : "<<over-30<<endl;
		}
}; 
class test : public cricket{
	public :
		
			void getover (){
				cout<<"over : "<<over*9<<endl;
			}
		
};
int main(){
	t20 t1;
	test t2;
	
	t1.getdata();
	t2.getover();
}
