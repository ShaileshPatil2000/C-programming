#include<iostream>
using namespace std;
int main()
{
	int c=0,d;
	int even,odd,a[25],b[25];
	for(int i=0;i<=25;i++)
	{
		
		if(i%2==0)
		{
			even++;
			a[c] = i;
			c++;
		}
		else
		{
		
			odd++;
			b[d] = i;
			d++;
		}
	}
	cout<<"total no of even no is "<<even<<endl;
	cout<<"total no of odd no is "<<odd<<endl;
//	cout<<a;
cout<<"Total nos even nos is ";
		for(int i=1; i<even; i++)
	{
		cout<<a[i]<<" ";
   }
	cout<<endl;
	cout<<"Total nos of odd is ";
	for(int i=1; i<odd; i++)
	{
		cout<<b[i]<<" ";
	}
}
