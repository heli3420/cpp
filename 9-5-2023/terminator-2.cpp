#include<iostream>
using namespace std;

void division(int a, int b)
{
	string msg = "can not divided by zero";
	
	try{
		if(b==0){
			throw msg;
		}
		else{
			cout<<"answer : "<<a/b<<endl;
			
		}
	}
	catch(int n){
		cout<<"can not divided by "<<n<<endl;
	}
	catch(string s){
		cout<<s<<endl;
	}
	catch(...){
		cout<<"unhandled exception!!"<<endl;
	}
}

int main(){
	int a,b;
	
	cout << "Enter a: ";
	cin  >> a;
	cout << "Enter b: ";
	cin  >> b;
	
	division(a,b);
	
	cout << "THE END !!" << endl;
}
