#include<iostream>
using namespace std;

void vote(int a) {
	
	string msg = "do not vote !!";
	
	try {
		if(a<18) {
			throw msg;
		}
		else {			
			cout << "you can vote " << endl;
		}
	}
	catch(int a) {
		cout << "do not vote befor your age is " << a << endl;
	}
	catch(string s) {
		cout << s << endl;
	}
	catch(...) {
		cout << "Unhandled exception !!" << endl;
	}
}

int main() {
	
	int a;
	
	cout << "Enter your age: ";
	cin  >> a;
	
	
	vote(a);
	
	
	
}
