#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
#define ll long long
#define md 1000000007ll
using namespace std;
ll fastExpo(ll x, ll n)
{
	ll res=1;
	while(n>0)
	{
		if(n%2 != 0)
		res=((res*x)%md);

		x=((x*x)%md);
		n=n>>1;
	}
	return res%md;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n,m;
		cin>>n>>m;
		ll ans=fastExpo(2,n)-1;
		ans=fastExpo(ans,m);
		cout<<ans<<endl;
	}
}