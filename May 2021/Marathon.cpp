#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,c,d,D;
		cin>>D>>d>>a>>b>>c;
		int total=d*D;
		if((total>=10) && (total<21))
		{
			cout<<a<<endl;
			continue;
		}
		if((total>=21) && (total<42))
		{
			cout<<b<<endl;
			continue;
		}
		if((total>=42))
		{
			cout<<c<<endl;
			continue;
		}
		cout<<0<<endl;
	}
}