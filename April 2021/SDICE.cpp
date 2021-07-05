#include<iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		int mod_of_n=n%4;
		ll total=(n/4)*11*4;
		if(mod_of_n == 1)
		{
			total+=20;
		}
		else if(mod_of_n == 2)
		{
			total+=36;
		}
		else if(mod_of_n == 3)
		{
			total+=51;
		}
		
		if(n>=4)
		{
			total+=(4-mod_of_n)*4;
		}
		cout<<"TOTAL = "<<total<<endl;		
	}
}
