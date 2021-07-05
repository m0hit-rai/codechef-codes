#include<iostream>
#include<string>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll k,n;
		string s;
		cin>>n;
		cin>>k;
		getchar();
		cin>>s;
		ll count=0;
		for(ll i=0;i<n;i++)
		{
			//cout<<"[[forentry]] COUNT = "<<count<<" i = "<<i<<endl;
			if(s[i] == '*')
			{
				count ++ ;
				//cout<<"[[ifentry]] COUNT = "<<count<<" i = "<<i<<endl;
				if(count == k)
				{
					cout<<"Yes"<<endl;
					break;
				}
				
			}
			else
			{
				//cout<<"[[elseentry]] COUNT = "<<count<<" i = "<<i<<endl;
				count=0;
			}
		}
		//cout<<"[[forexit]] COUNT = "<<count<<endl;
		if(count != k)
		{
			cout<<"No"<<endl;
		}
	}
}