#include<iostream>
using namespace std;
int main()
{
	int num,pos;
	cout<<"enter the number   :";
	cin>>num;
	cout<<"enter the position :";
	cin>>pos;
	if(num&(pos-1)<<1)
	{
		cout<<"yes";
	}
	else
	{
		cout<<"no";
	}
}
