#include<iostream>
using namespace std;

class cafe
{
	private:
		int cafe_id;
		string cafe_name;
		string cafe_type;
		int cafe_rating;
		static string cafe_location;
		int cafe_establish_year;
		int cafe_staff_quantity;
		
	public:
		
		
		cafe()
		{
			cout<<"wel come to the cafe !!"<<endl;
			setdata();
		}
		
		void setdata()
		{
			cout<<"enter cafe id : ";
			cin>>cafe_id;
			cout<<"enter cafe name : ";
			cin>>cafe_name;
			cout<<"enter cafe type : ";
			cin>>cafe_type;
			cout<<"enter cafe rating: ";
			cin>>cafe_rating;
			cout<<"enter cafe establish year : ";
			cin>>cafe_establish_year;
			cout<<"enter cafe staff quantity: ";
			cin>>cafe_staff_quantity;
		}
		
	
		void getdata()
		{
			cout<<"cafe id : "<<cafe_id<<endl
				<<"cafe name : "<<cafe_name<<endl
				<<"cafe type : "<<cafe_type<<endl
				<<"cafe rating : "<<cafe_rating<<endl
				<<"cafe location : "<<cafe_location<<endl
				<<"cafe establish year : "<<cafe_establish_year<<endl
				<<"cafe staff quantity : "<<cafe_staff_quantity<<endl;
		}
	};
		
		string cafe :: cafe_location="surat";
		
		int main()
		{
			int n;
			cout<<"enter number of hotel : ";
			cin>>n;
			
			cafe c[n];
			for(int i=0; i<n; i++)
			{
				c[i].getdata();
			}
		}
			
        
