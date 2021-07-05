#include<iostream>
#include<queue>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(;t>0;t--)
	{
		int n,k,count_boxes=0;
		cin>>n>>k;
		priority_queue<int> boxes;
		long int tower_height=0;
		for(;n>0;n--)
		{
			int x;
			cin>>x;
			boxes.push(x);
		}
		while(tower_height<2*k && !boxes.empty())
		{
			tower_height+=boxes.top();
			boxes.pop();
			count_boxes++;
			if(count_boxes==1 && tower_height>=2*k)
			{
				tower_height=k;
			}
		}
		if(tower_height>=2*k)
		{
			cout<<count_boxes<<endl;
		}
		else
		{
			cout<<-1<<endl;
		}

	}
}