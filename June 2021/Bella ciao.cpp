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
		ll D,d,p,q;
		cin>>D>>d>>p>>q;
		ll n=D/d;
		// An A.P. with a=p*d, n=D/d, and common diff=q*d
		ll ans=(((2*p)+((n-1)*q))*n*d)/2ll;
		// some days are left, when D is not divisible by d
		ans+=(D%d)*(p+q*n);
		cout<<ans<<endl;
	}
}