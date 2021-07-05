#include<iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll c;
		cin>>c;

		ll d=log2(c);
		ll a=(1<<d) - 1;
		ll b= a^c;
		ll prod=a*b;
		//cout<<"\nFinal ===> "<<a<<" * "<<b<<" = "<<prod<<endl;
		cout<<prod<<endl;

	}
}