#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"enter the number :";
	cin>>num;
	if((num)&15)
	{
		cout<<"it contain set bit's";
	}
    else
    {
    	cout<<"it dose'nt contain set bit's";
	}
}
