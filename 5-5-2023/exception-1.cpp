#include<iostream>
using namespace std;

void division(int a,int b) {
	
	string msg = "Cannot devide by ZERO !!";
	
	
	try {
		if(b==0) {
			throw msg;
		}
		else {			
			cout << "Answer: " << (double)a/(double)b << endl;
		}
	}
	catch(int n) {
		cout << "Cannot devide by " << n << endl;
	}
	catch(string s) {
		cout << s << endl;
	}
	catch(...) {
		cout << "Unhandled exception !!" << endl;
	}
}

int main() {
	
	int a,b;
	
	cout << "Enter a: ";
	cin  >> a;
	cout << "Enter b: ";
	cin  >> b;
	
	division(a,b);
	
	cout << "THE END !!" << endl;
	
}
