#include<iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll modulo=(ll)(pow(10,9))+7ll;
ll fastExpo(int n)
{
	ll res=1,x=2;
	while(n>0)
	{
		if(n%2 != 0)
		res=((res*x)%modulo);

		x=((x*x)%modulo);
		n=n>>1;
	}
	return res%modulo;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		ll res=fastExpo(n-1);
		cout<<(res)<<endl;
		/*
		ll res=0ll,modulo=(ll)(pow(10,9))+7ll;
		for(ll i=0;i<pow(2,n);i++)
		{
			if((i^(i+1)^(i+2)^(i+3)) == 0)
			{
				res++;
				cout<<i<<"\t";
			}	
		}
		cout<<"\nResult = "<<res<<"\nModded = "<<res%modulo;*/
	}
}