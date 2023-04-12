#include<iostream>
using namespace std;

class house
{
	private:
	  
	  string house_name;
	  string house_color;
	  int house_no;
	  int no_of_floor;
	  int no_rooms;
	  int hight_of_rooms;
	  
	
	public:
		void setdata(){
			
			cout<<"enter house_name: ";
			cin>>house_name;
			cout<<"enter house_color: ";
			cin>>house_color;
			cout<<"enter house_no: ";
			cin>>house_no;
			cout<<"enter no_of_floor: ";
			cin>>no_of_floor;
			cout<<"enter no_rooms: ";
			cin>>no_rooms;
			cout<<"enter hight_of_rooms: ";
			cin>>hight_of_rooms;
			
		}
		void getdata(){
			cout<<"house_name\t: "<<house_name<<endl
			    <<"house_color\t: "<<house_color<<endl
			    <<"house_no\t: "<<house_no<<endl
			    <<"no_of_floor\t: "<<no_of_floor<<endl
			    <<"no_rooms\t: "<<no_rooms<<endl
			    <<"hight_of_rooms\t: "<<hight_of_rooms<<endl;
			    
		}
		
};

int main()
{
	house h1,h2,h3;
	h1.setdata();
	h2.setdata();
	h3.setdata();
	
	h1.getdata();
	h2.getdata();
	h3.getdata();
		
}
