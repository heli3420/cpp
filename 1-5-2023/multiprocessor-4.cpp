#include<iostream>
using namespace std;

class product{
	private:
		int id;
		string name;
		int price;
		int qty=1;
		static int bill;
		
		public:
			void setdata(){
				cout<<"enter id: ";
				cin>>id;
				cout<<"enter name: ";
				cin>>name;
				cout<<"enter price: ";
				cin>>price;
				
			}
			static void header (){
				cout<<"id\tname\tprice\tqty\tamount\n";
			}
			void getdata(){
				cout<<id<<"\t"<<name<<"\t"<<price<<"\t"<<qty<<"\t"<<price*qty<<endl;
			}
			void addtobill(){
				bill+=price*qty;
			}
			static void gettotalbill(){
				cout<<"======================"<<endl
				    <<"total amount:\t\t\t"<<bill<<endl
				    <<"======================"<<endl;
				    
			}
			void operator++(){
				++qty;
			}
			void operator--(){
				--qty;
			}
			
};

int product::bill=0;
int main(){
	int n;
	
	cout<<"enter number of products : ";
	cin>>n;
	
	product p[n];
	
	for(int i=0; i<n; i++) p[i].setdata();
	
	int m;
	
	cout<<"enter the product to add qty : ";
	cin>>m;
	
	++p[m];
	
	cout <<"enter the product to remove qty : ";
	cin>>m;
	--p[m];
	
	product::header();
	
	for(int i=0; i<n; i++)
	{
		p[i].addtobill();
		p[i].getdata();
	}
	product::gettotalbill();
	
}
