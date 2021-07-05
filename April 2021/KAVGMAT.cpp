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
		ll n,m,k,count=0;
		cin>>n>>m>>k;
		ll mat_sum[n][m], mat[n][m],j_min[n];
		for(int x=0;x<n;x++)
		j_min[x]=1000005ll;
		//cout<<"j_min[3] = "<<j_min[3]<<endl<<endl;
		for(ll i=0;i<n;i++)
		{
			for(ll j=0;j<m;j++)
			{
				ll x;
				cin>>x;
				mat[i][j]=x;
				if(mat[i][j]>=k)
				{
					j_min[i]=min(j,j_min[i]);
					count++;
				}
				//creating sum matrix
				if(i==0 && j==0)
				{
					mat_sum[i][j]=x;
				}
				else if(i==0 && j!=0)
				{
					mat_sum[i][j]=mat_sum[i][j-1]+x;
				}
				else if(i!=0 && j==0)
				{
					mat_sum[i][j]=mat_sum[i-1][j]+x;
				}
				else
				{
					mat_sum[i][j]=mat_sum[i-1][j]+mat_sum[i][j-1]+x-mat_sum[i-1][j-1];
				}
			}
		}
		/*cout<<"Mat ENTERED :\n";
		for(ll i=0;i<n;i++)
		{
			for(ll j=0;j<m;j++)
			{
				cout<<mat[i][j]<<"\t";
			}
			cout<<"\n\n";
		}
		cout<<"SUM OF Mat ENTERED :\n";
		for(ll i=0;i<n;i++)
		{
			for(ll j=0;j<m;j++)
			{
				cout<<mat_sum[i][j]<<"\t";
			}
			cout<<"\n\n";
		}*/
		for(ll i=1;i<n;i++)
		{
			
			ll x=1;
			while((x<=i) && (x<= min(m,n)))
			{
				x++;
				//cout<<"[[[forj]]] i = "<<i<<",, j = "<<j<<",, j_min[i] = "<<j_min[i]<<endl<<endl;
				for(ll j=max(x-1,j_min[i]);j<m;j++)
				{
					ll sum=0;
					sum+=mat_sum[i][j];
					if( i-x >=0)
					sum-=mat_sum[i-x][j];
					if( j-x >=0)
					sum-=mat_sum[i][j-x];
					if(( i-x >=0) &&( j-x >=0))
					{
						sum+=mat_sum[i-x][j-x];
						if(j_min[i-x+1]<= (j-x+1))
						{
							count+=m-j;
							break;
						}
					}
					//checking avg
					if(sum/(x*x) >= k )
					count++;
					
				}
			}
		}
		cout<<count<<endl;
	}
}