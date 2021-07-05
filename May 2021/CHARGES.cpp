#include<iostream>
#include<bits/stdc++.h>
#include<string>
#define ll long long
using namespace std;
inline int get_space(string s,int index, int n)
{
	int res=0;
	if(index>0 && index<n-1)
	{
		res+=s[index]==s[index-1]?2:1;
		// cout<<"get_space "<<"res = "<<res<<endl;
		// cout<<s<<endl;
		res+=s[index]==s[index+1]?2:1;
		// cout<<"get_space "<<"res = "<<res<<endl;
	}
	else if(index==0)
	{
		res+=s[index]==s[index+1]?2:1;
	}
	else
	{
		res+=s[index]==s[index-1]?2:1;
	}

	return res;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		string s;
		int arr[k],curr_sp[k]{0};
		// getline(cin,s);
		cin>>s;
		for(int i=0;i<k;i++)
		{
			cin>>arr[i];
		}
		//Main calculation
		int total_sp=0;
		for(int i=0;i<n-1;i++)
		{
			curr_sp[i]= get_space(s,i,n);
			if(s[i]==s[i+1])
			total_sp+=2;
			else
			total_sp+=1;
		}
		
		cout<<"total_sp = "<<total_sp<<endl;
		curr_sp[n-1]=get_space(s,n-1,n);

		for(int i=0;i<k;i++)
		{
			total_sp-=curr_sp[arr[i]-1];

			s[arr[i]-1]=s[arr[i]-1]=='1'?'0':'1';
			
			curr_sp[arr[i]-1]=get_space(s,arr[i]-1,n);
			total_sp+=curr_sp[arr[i]-1];
			cout<<total_sp<<endl;
		}
	}
}