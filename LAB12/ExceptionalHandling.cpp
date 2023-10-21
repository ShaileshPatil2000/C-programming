#include<iostream>
using namespace std;

int division(int x, int y){
	try
	{
		if(y==0)
		{
		throw "Attempted to divide by 0";
		}
	}
		catch(const char *e)
	{
		cout<<e<<endl;
	}
	return (x/y);
}

int main(){
	int dividend,divisor;
	float result;
	cout<<"Enter dividend: ";
	cin>>dividend;
	cout<<"Enter divisor: ";
	cin>>divisor;
	result=division(dividend,divisor);
	cout<<result;
	return 0;
}
