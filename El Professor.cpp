#include<iostream>
#include<vector>
using namespace std;
int main()
{
	
	int t;
	cin>>t;
	for(;t>0;t--)
	{
		int n,m;
		cin>>n>>m;
		vector<int> max_marks(n,10);
		for(;m>0;m--)
		{
			int i,j,k;
			cin>>i>>j>>k;
			for(;i<=j;i++)
			{
				max_marks[i-1]*=k;
			}
		}
		long int mean=0;
		for(int i : max_marks)
		{
			mean+=i;
		}
		mean/=n;
		cout<<mean<<endl;

	}
	
	return 0;
}