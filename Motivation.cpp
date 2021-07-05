#include<iostream>
#include<map>
#define ll long long
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n,x;
		cin>>n;
		cin>>x;
		map <ll,ll> m;
		while(n--)
		{
			ll s,r;
			cin>>s;
			cin>>r;
			m[r]=s;
		}
		for(auto rit = m.rbegin();rit!=m.rend();++rit)
		{
			if(rit->second <= x)
			{
				cout<<"ANS = "<<rit->first<<endl;
				break;
			}
		}
	}
}