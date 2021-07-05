#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int t;
	cin>>t;
	vector<int> op;
	for(;t>0;t--)
	{
		int n;long int k,d;
		cin>>n>>k>>d;
		long int sum=0;
		for(;n>0;n--)
		{
			int i;
			cin>>i;
			sum+=i;
		}
		op.insert(op.end(),min(sum/k,d));
	}
	for(auto it:op)
	{
		cout<<it<<endl;
	}
}