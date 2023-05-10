/*Write a Program to handle ambiguity error permanently in Hybrid inheritance.*/

#include<iostream>
using namespace std;
 
class A {
    public:
 
    void func() {
        cout << " I am in class A" << endl;
    }
};
 
class B {
    public:
 
    void func() {
        cout << " I am in class B" << endl;
    }
};

class C: public A, public B {
 
 
};
 
int main() {
 
    
    C obj;
 
    
    obj.A::func();
 
    obj.B::func();
 
    return 0;
}
