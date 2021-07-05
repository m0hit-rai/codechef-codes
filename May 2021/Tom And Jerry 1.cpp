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
		int a,b,c,d,k;
		cin>>a>>b>>c>>d>>k;
		int ans= abs(a-c)+abs(b-d);

		if((ans==k) ||((ans-k)%2 == 0))
		{
			cout<<"YES\n";
		}
		else
		{
			cout<<"NO\n";
		}
	}
}