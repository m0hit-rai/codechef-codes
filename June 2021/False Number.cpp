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
		string s;
		cin>>s;
		if(s[0]!='1')
		{
			cout<<"1"<<s<<endl;
		}
		else
		{
			cout<<s[0]<<"0";
			for(int i=1;i<s.size();i++)
			{
				cout<<s[i];
			}
			cout<<endl;
		}

	}
}