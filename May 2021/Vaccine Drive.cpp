#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int g,p,arr[11];
		cin>>g>>p;
		for(int i=1;i<11;i++)
		cin>>arr[i];

		int sum=0,max_days=0,min_days=0;
		for(int i=10;i>=g;i--)
		{
			sum+=arr[i];
		}	

		max_days=(sum%p==0)?(sum/p):((sum/p)+1);
		sum=sum-arr[g];
		min_days=((sum/p)+1);

		cout<<min_days<<" "<<max_days<<endl;
	}
}