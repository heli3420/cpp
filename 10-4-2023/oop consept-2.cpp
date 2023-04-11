#include<iostream>
using namespace std;

class car
{
	private:
	  int car_id;
	  string car_name;
	  string car_color;
	  string car_model;
	  int car_release_year;
	
	public:
		void setdata(){
			cout<<"enter car_id: ";
			cin>>car_id;
			cout<<"enter car_name: ";
			cin>>car_name;
			cout<<"enter car_color: ";
			cin>>car_color;
			cout<<"enter car_model: ";
			cin>>car_model;
			cout<<"car_release_year: ";
			cin>>car_release_year;
			
		}
		void getdata(){
			cout<<"car_id\t: "<<car_id<<endl
			    <<"car_name\t: "<<car_name<<endl
			    <<"car_color\t: "<<car_color<<endl
			    <<"car_model\t: "<<car_model<<endl
			    <<"car_release_year\t: "<<car_release_year<<endl;
			    
		}
		
};

int main()
{
	car c1,c2,c3,c4;
	c1.setdata();
	c2.setdata();
	c3.setdata();
	c4.setdata();
	
	c1.getdata();
	c2.getdata();
	c3.getdata();
	c4.getdata();
	
	
	
	
}
