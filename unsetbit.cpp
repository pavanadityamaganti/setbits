#include<iostream>
using namespace std;
int main()
{
	int n,res,pos;
	cout<<"Enter the number    :";
	cin>>n;
	cout<<"Enter the position  :";
	cin>>pos;
	res=n^(1<<(pos-1));
	cout<<"***********************AFTER THE PROCESS*************************"<<endl;
	cout<<"The given bit is    :"<<n<<endl;
	cout<<"Obtained value is   :"<<res<<endl;
	cout<<"Hence the bit at position "<<pos<<" is unset";
}
