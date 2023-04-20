#include<iostream>
using namespace std;

class diamond
{
	private:
		int comp_id;
		string comp_name;
		int comp_staff_quantity;
		int comp_revenue;
		int comp_import_raw_diamonds;
		int comp_export_raw_diamonds;
		string comp_ceo;
		
	public:
		
		diamond(int comp_id,string comp_name,int comp_staff_quantity,int comp_revenue,int comp_import_raw_diamonds,int comp_export_raw_diamonds,string comp_ceo)
				{
				this->comp_id=comp_id;
				this->comp_name=comp_name;
				this->comp_staff_quantity=comp_staff_quantity;
				this->comp_revenue=comp_revenue;
				this->comp_import_raw_diamonds=comp_import_raw_diamonds;
				this->comp_export_raw_diamonds=comp_export_raw_diamonds;
				this->comp_ceo=comp_ceo;
			    getdata();
				}
			
				
				
		void getdata()
		{
			cout<<"comp id : "<<comp_id<<endl
				<<"comp name : "<<comp_name<<endl
				<<"comp staff quantity : "<<comp_staff_quantity<<endl
				<<"comp revenue : "<<comp_revenue<<endl
				<<"comp import raw diamonds : "<<comp_import_raw_diamonds<<endl
				<<"comp export raw diamonds : "<<comp_export_raw_diamonds<<endl
				<<"comp ceo : "<<comp_ceo<<endl;
		}
		
	};
		
		int main ()
		{
			diamond d1 (101,"heli",1000,2000,2000,30000,"rohit");
			diamond d2 (102,"heli",1000,2000,2000,30000,"rohit");
			diamond d3 (103,"heli",1000,2000,2000,30000,"rohit");
			
		}
		
		

						


