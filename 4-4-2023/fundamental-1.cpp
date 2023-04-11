#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int i;
	char str[100];
	cout<<"enter string : ";
	cin >> str;
	
	for(i=0; str[i]!=NULL; i++)
	{
		if(str[i]>='0' && str[i]<='9')
		{
			cout<<"enter string is numeric. ";
		}
		else
		{
			cout<<"string is not numeric.";
		}
	}
	
}
