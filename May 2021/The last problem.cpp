#include <iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
inline ll sum_till_n(ll n)
{
	return (n*(n+1))/2;
}
inline ll sum_both_inclusive(ll n, ll m)
{
	return (sum_till_n(m)-sum_till_n(n-1));
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll x1,x2,y1,y2;
		cin>>x1>>y1>>x2>>y2;
		ll pos1=sum_till_n(x1)+sum_both_inclusive(x1,x1+y1-2);
		ll t_sum=pos1;
		for(ll i=x1+1;i<=x2;i++)
		{
			ll pos2 =sum_till_n(i)+sum_both_inclusive(i,i+y1-2);
			t_sum+=pos2;
		}
		for(ll i=y1+1;i<=y2;i++)
		{
			ll pos2 =sum_till_n(x2)+sum_both_inclusive(x2,x2+i-2);
			t_sum+=pos2;
		}
		cout<<t_sum<<endl;
	}
}