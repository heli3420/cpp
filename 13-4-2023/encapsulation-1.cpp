#include<iostream>
using namespace std;

class student
{
	private:
	  int std_id;
	  string std_name;
	  int std_age;
	  string std_cource;
	  char std_email;
	  string std_city;
	  string std_college;
	
	public:
		void setdata(){
			cout<<"enter std_id: ";
			cin>>std_id;
			cout<<"enter std_name: ";
			cin>>std_name;
			cout<<"enter std_age: ";
			cin>>std_age;
			cout<<"enter std_cource: ";
			cin>>std_cource;
			cout<<"enter std_email: ";
			cin>>std_email;
			cout<<"enter std_city: ";
			cin>>std_city;
			
			getdata();
			
		}
		void getdata(){
			cout<<"std_id\t: "<<std_id<<endl
			    <<"std_name\t: "<<std_name<<endl
			    <<"std_age\t: "<<std_age<<endl
			    <<"std_cource\t: "<<std_cource<<endl
			    <<"std_email\t: "<<std_email<<endl
			    <<"std_city\t: "<<std_city<<endl;
		}
		
};

int main()
{
	student s1,s2,s3,s4,s5;
	s1.setdata();
	s2.setdata();
	s3.setdata();
	
}
