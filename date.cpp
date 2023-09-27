#include<iostream>
using namespace std;
class Date1

{
	int dd,mm,yy;
	public:
		void getDate()
		{
			cout<<"Enter date"<<endl;
			cin>>dd>>mm>>yy;
		}
	void setDd()
	{
		cout<<"Enter date:"<<endl;
		cin>>dd;
	}
		void setMm()
	{
		cout<<"Enter month:"<<endl;
		cin>>mm;
	}
		void setYy()
	{
		cout<<"Enter year:"<<endl;
		cin>>yy;
	}
	void display()
	{
		cout<<"Date is:  "<<dd<<"/"<<mm<<"/"<<yy;
	}

};
int main()
{
	Date1 d;
	d.getDate();
		d.display();
	d.setDd();
//	d.setMm();
//	d.setYy();
	d.display();
}
