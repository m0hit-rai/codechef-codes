#include<iostream>
#include<string>
#include<bits/stdc++.h>
#include<algorithm>
#define ll long long
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		size_t found = s.find("0");
		if (found == string::npos)
		{
			//cout<<s<<" ==> "<<0<<"\n";//<<endl;
			//cout<<x<<"  ===>  "<<0<<endl;
			cout<<0<<endl;
			continue;
		}
		string output="1";
		ll n=s.length();
		char last_entered_bit='1';
		for(ll i=1;i<n;i++)
		{
			if(last_entered_bit==s[i])
			{
				continue;
			}
			
			
		}
	}
}