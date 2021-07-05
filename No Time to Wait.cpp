#include<iostream>
using namespace std;
int main()
{
	int n,h,x;
	bool check=false;
	//long long sum_t=0;
	cin>>n;
	cin>>h;
	cin>>x;
	while(n--)
	{
		int t;
		cin>>t;
		if(h<=(t+x))
		{
			check=true;
		}
	}
	if(check)
	{
		cout<<"Yes";
	}
	else
	{
		cout<<"No";
	}
}