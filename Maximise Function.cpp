#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		long long int diff=0;
		int max=INT_MIN,min=INT_MAX,min2=INT_MAX;
		while(n--)
		{
			int x;
			cin>>x;
			if(x>max)
			{
				max=x;
			}
			if(x<min)
			{
				min2=min;
				min=x;
			}
			
			cout<<"MAX="<<max<<"\tMIN="<<min<<"\tMIN2="<<min2<<endl;
		}
		diff=llabs(min-min2)+ llabs(min2-max)+llabs(max-min);
		cout<<diff<<endl;
	}
}