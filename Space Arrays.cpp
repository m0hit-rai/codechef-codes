#include<bits/stdc++.h>
#include<map>
#define ll long long
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll sum=0;
		map<ll,ll> m;
		bool flag=true;
		for(ll i=0;i<n;i++)
		{
			ll x;
			cin>>x;
			sum+=x;
			m[x]++;
			/*if(m[x] > (n-x+1))
			{
				flag = false;
			}*/
		}
		ll space_left=n;
		for(ll i=n;i>=1;i--)
		{
			//cout<<"S.L. = "<<space_left<<"\tm[ "<<i<<" ] = "<<m[i]<<endl;
			if(m[i] > (space_left-i+1))
			{
				flag = false;
				break;
			}
			space_left-=m[i];
		}
		ll max_allowed_sum= (n*(n+1))/2;
		//cout<<"Max SUM = "<<max_allowed_sum<<"\t SUM = "<<sum<<endl;
		if((sum < max_allowed_sum) && ((max_allowed_sum - sum) % 2 == 1) && flag)
		{
			cout<<"First"<<endl;
		}
		else
		{
			cout<<"Second"<<endl;
		}
		
	}
}