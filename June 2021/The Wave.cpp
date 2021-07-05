#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
#define ll long long
#define md 1000000007ll
using namespace std;
int find_index(int a[], int n, int x)
{
	int st = 0;
	int end = n - 1;
	while (st <= end) 
	{
		int mid = (st + end) / 2;
		if (a[mid]==x)
			return mid;
		else if (a[mid] < x)
			st = mid + 1;
		else
			end = mid - 1;
	}
	return end + 1;
}
int main()
{
	int n,q;
	cin>>n>>q;
	int a[n],x[q];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<q;i++)
	{
		cin>>x[i];
	}
	sort(a,a+n);
	for(int i=0;i<q;i++)
	{	
		int pos=find_index(a,n,x[i]);
		if(a[pos]==x[i])
			cout<<"0\n";
		else if((pos)%2)
			cout<<"NEGATIVE\n";
		else
			cout<<"POSITIVE\n";
	}
}
	