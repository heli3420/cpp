// C++ program to add two objects using binary
// plus (+) operator overloading

#include <iostream>
using namespace std;

class NUM {
private:
    int n;

public:
    
    void getNum(int x)
    {
        n = x;
    }
    
    void dispNum(void)
    {
        cout << "Number is: " << n;
    }
    // add two objects - Binary Plus(+) Operator Overloading
    NUM operator+(NUM& obj)
    {
        NUM x; 
        x.n = this->n + obj.n;
        return (x); // return object
    }
};

int main()
{
    NUM num1, num2, sum;
    num1.getNum(20);
    num2.getNum(30);

    sum = num1 + num2;

    sum.dispNum();
    cout << endl;

    return 0;
}

