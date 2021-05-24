#include<iostream>
using namespace std;
int main()
{
	int num,count;
	cout<<"enter the number :";
	cin>>num;
	while(num!=0)
	{
		if((num)&1==1)
		{
			count+=1;
		}
		else
		{
			count=0;
		}
		num=num>>1;
    }
if(count>0)
{
	cout<<"it contain set bit's";
}
else
{
    cout<<"it dose'nt contain set bit's";
}
}
