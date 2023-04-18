#include<iostream>
using namespace std;

class hotel
{
	private:
	  int hotel_id;
	  string hotel_name;
	  static string hotel_type;
	  char hotel_rating;
	  static string hotel_location;
	  int hotel_establish_year;
	  int hotel_staff_quantity;
	  int hotel_room_quantity;
	
	public:
		void setdata(){
			cout<<"enter hotel_id: ";
			cin>>hotel_id;
			cout<<"enter hotel_name: ";
			cin>>hotel_name;
			cout<<"enter hotel_rating: ";
			cin>>hotel_rating;
			cout<<"enter hotel_establish_year: ";
			cin>>hotel_establish_year;
			cout<<"enter hotel_staff_quantity: ";
			cin>>hotel_staff_quantity;
			cout<<"enter hotel_room_quantity: ";
			cin>>hotel_room_quantity;
			
			
			getdata();
			
		}
		void getdata(){
			cout<<"hotel_id\t: "<<hotel_id<<endl
			    <<"hotel_name\t: "<<hotel_name<<endl
			    <<"hotel_type\t: "<<hotel_type<<endl
			    <<"hotel_rating\t: "<<hotel_rating<<endl
			    <<"hotel_location\t: "<<hotel_location<<endl
			    <<"hotel_establish_year\t: "<<hotel_establish_year<<endl
			    <<"hotel_staff_quantity\t: "<<hotel_staff_quantity<<endl
			    <<"hotel_room_quantity\t: "<<hotel_room_quantity<<endl;
		}
		
};

string hotel :: hotel_type="hotel";
string hotel :: hotel_location="surat";

int main()
{
	int n,i;
	cout<<"enter no of hotel: ";
	cin>>n;
	
	hotel h[n];
	
	for(i=0; i<n; i++)
	{
		h[i].setdata();
	}
	for(i=0; i<n; i++)
	{
		h[i].getdata();
	}
}
