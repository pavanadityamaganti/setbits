#include<iostream>
using namespace std;
int main()
{
	int n,res=0,tem;
	cout<<"enter the number :";
	cin>>n;
	tem=n;
	while(n!=0)
	{
		res=n^1;
		n=n>>1;
	}
	//n=n>>1;
	if(res==0)
	{
		cout<<"the given number is :"<<tem<<endl<<"but finally obtained number is :"<<res<<endl<<"hence the bit's are unset";
	}
	return 0;
}
