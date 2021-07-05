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
		int arr[7]={1,2,3,4,5,6,7};
		int n;
		cin>>n;
		int count=0,min_prob_req=INT_MIN;
		int p_set[n];
		for(int i=0;i<n;i++)
		{
			cin>>p_set[i];
		}
		for(int i=0;i<n;i++)
		{
			if(binary_search(arr,arr+7,p_set[i]))
			{
				count++;
				if(count==7)
				min_prob_req=i+1;
			}
		}
		cout<<min_prob_req<<endl;
	}
}