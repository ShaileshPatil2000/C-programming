#include<iostream>
using namespace std;
int main()
{
	char p='D';
	int n;
	cout<<"Enter number:"<<endl;
	cin>>n;
	cout<<endl;
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<p<<" ";
		}
		cout<<endl;
		p--;
	}
	return 0;
}
