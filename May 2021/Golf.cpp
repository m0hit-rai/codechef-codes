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
		ll n,x,k;
		cin>>n>>x>>k;
		if((x%k==0) || ((n-x+1)%k == 0))
		cout<<"Yes"<<endl;
		else
		cout<<"No"<<endl;
	}
}