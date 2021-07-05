#include<iostream>
#include<bits/stdc++.h>
#define ll long long
#define mn -1000000007
#define mx 1000000007
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int x[n],y[n],x_h=mn,x_2h=mn,y_h=mn,y_2h=mn,x_l=mx,x_2l=mx,y_l=mx,y_2l=mx;
		bool check_max[2]{0},check_min[2]{0};
		for(int i=0;i<n;i++)
		{
			cin>>x[i]>>y[i];
		}
		if(n<5)
		{
			cout<<"0\n";
			continue;
		}
		// cout<<"x_h = "<<x_h<<"\tx_2h = "<<x_2h<<"\ty_h = "<<y_h<<"\ty_2h = "<<y_2h<<endl;
		for(int i=0;i<n;i++)
		{
			// x_h=max(x_h,x[i]);
			// y_h=max(y_h,y[i]);
			if(x_2h<x[i] && x[i]<x_h)
			{
				x_2h=x[i];
			}
			if(y_2h<y[i] && y[i]<y_h)
			{
				y_2h=y[i];
			}
			x_l=min(x_l,x[i]);
			y_l=min(y_l,y[i]);
			if(x_2l>x[i] && x[i]>x_l)
			{
				x_2l=x[i];
			}
			if(y_2l>y[i] && y[i]>y_l)
			{
				y_2l=y[i];
			}
		}
		
	}
}