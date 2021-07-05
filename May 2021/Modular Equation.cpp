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
		int n,m;
		ll count=0;
		cin>>n>>m;
		for(int i=1;i<n;i++)
		{
			int count_i=0;
			for(int j=i+1;j<=n;j++)
			{
				if(((m%i)%j) == ((m%j)%i))
				{
					//cout<<"( "<<i<<" , "<<j<<" )\t";
					//cout<<"m%i = "<<(m%i)<<"\t m%j = "<<(m%j)<<"\t (m%j)%i = "<<((m%j)%i)<<endl;
					count++;
					count_i++;
				}	
			}
			//cout<<"(i,Count) = "<<i<<" , "<<count_i<<endl;
		}
		cout<<"\nFinal Count = "<<count<<endl;
	}
}
