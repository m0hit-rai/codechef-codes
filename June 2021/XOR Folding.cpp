#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
#define ll long long
#define md 1000000007ll
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,cont=0;
		cin>>n>>m;
		for(int i=0;i<(n*m);i++)
		{
			char x;
			cin>>x;
			if(x=='1')
			cont++;
		}
		if(cont%2)
		cout<<"YES\n";
		else
		cout<<"NO\n";
	}
}