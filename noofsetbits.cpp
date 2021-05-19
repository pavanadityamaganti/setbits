#include<iostream>
using namespace std;
int main()
{
	int a,c=0;
	cout<<"enter the number :";
	cin>>a;
	while(a!=0)
	{
		if(a&1==1)
		{
			c+=1;
	    }
	a=a>>1;    
	}
	cout<<"the count of setbit's in the given number is :"<<c;
	return 0;
}
