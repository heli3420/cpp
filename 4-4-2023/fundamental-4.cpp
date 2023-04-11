#include<iostream>
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int a,i;
	char n;
	cout<<"enter any charcator : ";
	cin>>n;
	if(n=='A'||n=='a'||n=='e'||n=='E'||n=='I'||n=='i'||n=='o'||n=='O'||n=='U'||n=='u')
	{
		cout<<"enter char is vowel";
	}
	else
	{
		cout<<"enter char is consonant";
	}
}
