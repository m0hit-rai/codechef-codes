#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
#define ll long long
#define md 1000000007ll
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	bool prime[(int)(1e18+1)];

	int t;
	cin>>t;
	while(t--)
	{
		ll a, b;
		cin>>a>>b;
		// if(a==1ll)
		// {
			while(b%2==0)
			{
				b=b>>1;
			}
			// while(b%5==0)
			// {
			// 	b=b/5;
			// }
			if(b==1)
				cout<<"Yes\n";
			else
				cout<<"No\n";
		// }
		// else
		// 	cout<<"No\n";
	}
}