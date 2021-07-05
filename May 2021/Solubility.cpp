#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x,a,b;
		cin>>x>>a>>b;
		long result=a+(100-x)*b;
		result=result*10;
		cout<<result<<endl;
	}
}