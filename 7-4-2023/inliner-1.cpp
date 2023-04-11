#include <iostream>
using namespace std;
   
void getDoubleValue(int F){
   F = F*2;
   cout << "F(Formal Parameter) = " << F;
}
  
int main(){
   int A;
   cout << "Enter a number\n";
   cin >> A;
   
   getDoubleValue(A);
   cout << "\n A(Actual Parameter) = " << A;
 
   return 0;
}
