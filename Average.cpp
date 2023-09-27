#include<iostream>
using namespace std;
int main()
{

	
	int mar,hin,eng,math,sci;
	cout<<"Enter marks of five subjects:";
	cin>>mar>>hin>>eng>>math>>sci;
	int sum=(mar+hin+eng+math+sci);
	float avg=sum/5f;
	
	
 
	cout<<"Total Average ="<<avg;
	return 0;
	
}
