#include<iostream>
using namespace std;
class members{
public:
void data(){
cout << "enter any number :"<< endl;
}
void data (int a){
cout << a << endl;
}
void data (int a,int b){
cout << "sum is \t: " << a+b << endl;
}
void data (int a, int b,int c){
cout << "muiltiplication is : " << a*b*c << endl;
}
void data (int a,int b ,int c,int d){
cout << "substraction is : " << a-b-c-d << endl;
}
};
int main (){
members m;
m.data();
m.data(11);
m.data(11,22);
m.data(11,22,33);
m.data(11,22,33,44);

}

