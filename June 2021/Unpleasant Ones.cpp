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
		int n;
		cin>>n;
		int arr[n],cnt_e=0,cnt_o=0;
		int even_index=0,odd_index=n-1;
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			if(x%2)
			{
				arr[odd_index]=x;
				odd_index--;
				cnt_o++;
			}
			else
			{
				arr[even_index]=x;
				even_index++;
				cnt_e++;
			}
		}
		// int ans[n];
		// if(cnt_o<cnt_e)
		// {
		// 	int i=1;
		// 	while(i<n && cnt_o--)
		// 	{
		// 		ans[i]=
		// 	}
		// }
		// int even_index=0;
		// for(int i=0;i<n;i++)
		// {
		// 	if(arr[i]%2==0)
		// 	{
		// 		int temp=arr[even_index];
		// 		arr[even_index]=arr[i];
		// 		arr[i]=temp;
		// 		even_index+=2;
		// 	}
		// }
		for(int i=0;i<n;i++)
		{
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}
}