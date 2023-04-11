#include<iostream>
using namespace std;

void input(int a[],int n){
cout << "enter 1st aliments:"<< endl;
for(int i=0;i<n;i++){
cout<<"a["<<i<<"]:";
cin >> a[i];
}
}
void input1(int b[],int n){
cout << "enter 2st aliments:"<< endl;
for(int i=0;i<n;i++){
cout<<"b["<<i<<"]:";
cin >> b[i];
}
}
void output(int a[],int n){
cout << "output of 1st array:"<<endl;

for(int i=0;i<n;i++){
cout<<a[i]<<endl;
}
}
void output1(int b[],int n){
cout<<"\n";
cout << "output of 2st array:"<<endl;
for(int i=0;i<n;i++){
cout<<b[i]<<endl;
}
}
void swap(int a[],int b[],int c[],int n){
for(int i=0;i<n;i++){
c[i]=a[i];
a[i]=b[i];
b[i]=c[i];
}
}
int main()
{
int n;
int a[n];
int b[n];
int c[n];
cout << "enter 1st array size:";
cin>>n;
cout << "enter 2nd array size:";
cin>>n;
input(a,n);
input1(b,n);
output(a,n);
output1(b,n);
swap(a,b,c,n);
cout << "after swap:"<< endl;
for(int i=0;i<n;i++){
cout << a[i] << endl;
}
cout<<"\n";
for(int i=0;i<n;i++){
cout << b[i] << endl;
}
}
