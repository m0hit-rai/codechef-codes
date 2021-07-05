#include<iostream>
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
		int n,k;
		cin>>n>>k;
		int arr[n];

		for(int i=0;i<n;i++)
		cin>>arr[i];

		sort(arr,arr+n,greater<int>());

		ll sum1=0ll,sum2=0ll;
		int i=0,j=1;
		while(j<=k)
		{
			sum1+=arr[i++];
			sum2+=arr[i++];
			j++;
		}
		sum2+=arr[i];
		cout<<max(sum1,sum2)<<endl;
	}
}