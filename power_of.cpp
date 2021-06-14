#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int b,p,ans=1;
	cin>>b>>p;
	while(p)
	{
		if(p&1==1)
		{
			ans=ans*b;
		}
		b=b*b;
		p=p>>1;
	}
	cout<<ans;
return 0;
}
