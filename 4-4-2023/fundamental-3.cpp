#include<iostream>
using namespace std;
int main()
{
	int i;
	char str[20];
	cout<<"enter string : ";
	cin>>str;
	for(i=0; str[i]!=NULL; i++)
	{
		if(str[i]>='A' && str[i]<='Z')
		{
			str[i]+=32;
			
		}
		else if (str[i]>='a' && str[i]<='z')
		{
			str[i]-=32;
			
		}
		cout<<""<< str[i];
	}
	
}
