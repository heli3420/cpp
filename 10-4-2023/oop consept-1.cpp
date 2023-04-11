#include<iostream>
using namespace std;

class employees
{
	private:
	  int emp_id;
	  string emp_name;
	  string emp_role;
	  int emp_age;
	  int emp_salary;
	  int emp_experience;
	  string emp_city;
	  string emp_company_name;
	
	public:
		void setdata(){
			cout<<"enter emp_id: ";
			cin>>emp_id;
			cout<<"enter emp_name: ";
			cin>>emp_name;
			cout<<"enter emp_role: ";
			cin>>emp_role;
			cout<<"enter emp_age: ";
			cin>>emp_age;
			cout<<"enter emp_salary: ";
			cin>>emp_salary;
			cout<<"enter emp_experience: ";
			cin>>emp_experience;
			cout<<"enter emp_city: ";
			cin>>emp_city;
			cout<<"enter emp_company_name: ";
			cin>>emp_company_name;
			
		}
		void getdata(){
			cout<<"emp_id\t: "<<emp_id<<endl
			    <<"emp_name\t: "<<emp_name<<endl
			    <<"emp_role\t: "<<emp_role<<endl
			    <<"emp_age\t: "<<emp_age<<endl
			    <<"emp_salary\t: "<<emp_salary<<endl
			    <<"emp_experience\t: "<<emp_experience<<endl
			    <<"emp_city\t: "<<emp_city<<endl
			    <<"emp_company_name\t: "<<emp_company_name<<endl;
		}
		
};

int main()
{
	employees e1,e2,e3,e4,e5;
	e1.setdata();
	e2.setdata();
	e3.setdata();
	e4.setdata();
	e5.setdata();
	e1.getdata();
	e2.getdata();
	e3.getdata();
	e4.getdata();
	e5.getdata();
	
	
	
}
