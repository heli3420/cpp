#include<iostream>
using namespace std;

class customer
{
	private:
	  int cust_id;
	  string cust_name;
	  int cust_age;
	  string cust_telecome_brand_name;
	  int cust_mobile_number;
	  string cust_city;
	  int cust_simcrad_validity;
	
	public:
		void setdata(){
			cout<<"enter cust_id: ";
			cin>>cust_id;
			cout<<"enter cust_name: ";
			cin>>cust_name;
			cout<<"enter cust_age: ";
			cin>>cust_age;
			cout<<"enter cust_telecome_brand_name: ";
			cin>>cust_telecome_brand_name;
			cout<<"enter cust_mobile_number: ";
			cin>>cust_mobile_number;
			cout<<"enter cust_city: ";
			cin>>cust_city;
			cout<<"enter cust_simcrad_validity : ";
			cin>>cust_simcrad_validity;
			
			
			
		}
		void getdata(){
			cout<<"cust_id\t: "<<cust_id<<endl
			    <<"cust_name\t: "<<cust_name<<endl
			    <<"cust_age\t: "<<cust_age<<endl
			    <<"cust_telecome_brand_name\t: "<<cust_telecome_brand_name<<endl
			    <<"cust_mobile_number\t: "<<cust_mobile_number<<endl
			    <<"cust_city\t: "<<cust_city<<endl
			    <<"cust_simcrad_validity\t: "<<cust_simcrad_validity<<endl;
		}
		
};

int main()
{
	customer c1,c2,c3,c4,c5;
	c1.setdata();
	c2.setdata();
	c3.setdata();
	c4.setdata();
	c5.setdata();
	c1.getdata();
	c2.getdata();
	c3.getdata();
	c4.getdata();
	c5.getdata();
	
}
