#include<iostream>
using namespace std;

class RBI{
	protected:
		int roi=6;
};
 class SBI: public RBI{
 	public:
 		void getroi(){
 			cout<<"rate of intrest : "<<roi+1<<endl;
		 }
 };
 class BOB: public RBI{
 	public:
 		void getroi(){
 			cout<<"rate of intrest : "<<roi-1<<endl;
		 }
 };
 class icici : public RBI{
 	public:
 		void getroi(){
 			cout<<"rate of intrest : "<<roi-2<<endl;
		 }
 };
 
 int main(){
 	SBI  S1;
 	BOB B1;
 	icici I1;
 	
 	S1.getroi();
 	B1.getroi();
 	I1.getroi();
 }
