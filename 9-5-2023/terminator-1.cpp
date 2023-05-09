#include<iostream>
using namespace std;

class garage
{
	private:
		int a;
	
	public:
		garage()
		{
			throw 5;
		}
};

class motor : public garage
{

	public:

	motor()
	{
		cout<<"motor class"<<endl;
	}
};
	int main()
	{
		try
		{
			motor car;
		}
		catch(...)
		{
			cout<<"Motor throw From the garage."<<endl;
		}

	return 0;
}
