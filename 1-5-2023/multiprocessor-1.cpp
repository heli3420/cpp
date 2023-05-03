#include<iostream>
using namespace std;
class message{
private:
string line;
public:
message(){
cout << "enter words:";
cin >> line;
}
void print(){
cout << line << endl;
}
void print(string line1){
cout << line << "  " << line1 << endl;
}
};

int main(){
message m;
m.print();
m.print("WORLD !!");
}
