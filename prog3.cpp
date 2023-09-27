#include<iostream>
using namespace std;
int main()
{
	char k='A';
	for(int i=0;i<=10;i++)
	{
		for(int j=0;j<=i;j++)
		{
			cout<<k;
		}
		cout<<endl;
		k++;
	}
}
