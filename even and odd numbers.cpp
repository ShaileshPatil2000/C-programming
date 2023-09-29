#include<iostream>
using namespace std;

void evenno(int n)
{
	for(int i=1;i<=2*n;i++)
	{

		if(i%2==0)
		{
		cout<<"Even number:"<<" ";
		cout<<i<<" "<<endl;	
		}
	}
	cout<<endl;
}


void oddno(int n)
{
	for(int i=1;i<=2*n;i++)
	{
		if(i%2!=0)
		{
			
		cout<<"Odd number:"<<" ";
		cout<<i<<endl;	
		}
	}
}
int main()
{
	int n=3;
	evenno(n);
	oddno(n);
}
