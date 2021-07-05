#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int main()
{
	
	int t;
	cin>>t;
	vector<int> output;
	for(;t>0;t--)
	{
		//n-->min heap && m--> max heap
		int n,m;
		long long sum_n=0,sum_m=0;
		cin>>n>>m;
		priority_queue<int> arr_m;
		priority_queue<int, vector<int>, greater<int>> arr_n;
		for(;n>0;n--)
		{
			int x;
			cin>>x;
			arr_n.push(x);
			sum_n+=x;
			//cout<<"Sum N="<<sum_n<<endl;
		}
		for(;m>0;m--)
		{
			int x;
			cin>>x;
			arr_m.push(x);
			sum_m+=x;
			//cout<<"Sum M="<<sum_m<<endl;
		}
		
		int change_count=0;
		//cout<<"While LOOP Starting here\n";
		while(sum_n<=sum_m && !arr_n.empty())
		{
			sum_n-=arr_n.top();
			sum_n+=arr_m.top();

			sum_m-=arr_m.top();
			sum_m+=arr_n.top();

			arr_n.pop();
			arr_m.pop();

			change_count++;
			//cout<<"Changes Done="<<change_count<<endl;
			//cout<<"Sum N="<<sum_n<<endl;
			//cout<<"Sum M="<<sum_m<<endl;
		}
		if(sum_n>sum_m)
		{
			output.push_back(change_count);
		}
		else
		{
			output.push_back(-1);
		}
	}
	for(auto it : output)
	{
		cout<<it<<endl;
	}
}
 
