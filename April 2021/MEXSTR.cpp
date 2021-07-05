#include<iostream>
#include<string>
#include<bits/stdc++.h>
#include<algorithm>
#define ll long long
using namespace std;
int main()
{
	//ll t;
	//cin>>t;
	//while(t--)
	//{
		for(int x=50;x<=200;x++){
		string s;
		int xj=x;
		while(xj>0)
			{
				int last_bit=(xj&1);
				s=to_string(last_bit)+s;
				xj=xj>>1;
			}
		//cin>>s;
		size_t found = s.find("0");
		if (found == string::npos)
		{
			cout<<s<<" ==> "<<0<<"\t";//<<endl;
			cout<<x<<"  ===>  "<<0<<endl;
			continue;
		}
		for(ll i=1;;i++)
		{
			ll j=i;
			string bin_rep;
			while(j>0)
			{
				int last_bit=(j&1);
				bin_rep=to_string(last_bit)+bin_rep;
				j=j>>1;
			}
			ll l=0,k=0;
			while((l < s.length()) && (k < bin_rep.length()))
			{
				if(bin_rep[k] == s[l])
				{
					k++;
					l++;
					continue;
				}
				l++;
			}
			if( k != bin_rep.length())
			{
				cout<<s<<" ==> "<<bin_rep<<"\t";//<<endl;
				cout<<x<<"  ===>  "<<i<<"\t"<<x+i<<endl;
				break;
			}
		}
//	}
		}
}