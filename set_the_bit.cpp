#include<iostream>
using namespace std;
int main()
{
	int n,pos,res;
	cout<<"enter the number   :";
	cin>>n;
	cout<<"enter the position :";
	cin>>pos;
    if(res=n|(1<<(pos-1)))
    {
    	cout<<"As the Obtained result is :"<<res<<endl;
    	cout<<"The given position of the number is converted to setbit";
	}
}
