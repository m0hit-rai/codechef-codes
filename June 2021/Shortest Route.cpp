#include<iostream>
#include<bits/stdc++.h>
#define ll long long
#define max 100000007
using namespace std;
// void printArr(int a[],int n)
// {
// 	for(int i=0;i<n;i++)
// 	cout<<a[i]<<"\t";
// 	cout<<endl;
// }
inline int abso(int x)
{
	if(x<0)
	return -1*x;
	else
	return x;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int a[n],b[m];
		for(int i=0;i<n;i++)
		cin>>a[i];
		for(int i=0;i<m;i++)
		cin>>b[i];
		int before[n],after[n];
		// before[i]=station no. before a[i], by which we can reach at a[i] fastest
		before[0]=1;
		int last_one=((a[0]==1)?1:-1);
		for(int i=1;i<n;i++)
		{
			if(a[i]!=0)
			{
				before[i]=i+1;
				last_one=((a[i]==1)?(i+1):last_one);
			}
			else
			{
				before[i]=last_one;
			}
		}
		// after[i]=station no. after a[i], by which we can reach at a[i] fastest
		int last_two=((a[n-1]==2)?n:-1);
		for(int i=n-1;i>=0;i--)
		{
			if(a[i]!=0)
			{
				after[i]=i+1;
				last_two=((a[i]==2)?(i+1):last_two);
			}
			else
			{
				after[i]=last_two;
			}
		}
		// if(n>=2 && a[0]!=1 && a[1]==0 )
		// {
		// 	before[1]=-1;
		// 	i=2;
		// }
		// for(;i<n;i++)
		// {
		// 	if(a[i]!=0)
		// 	before[i]=i+1;
		// 	else 
		// 	{
		// 		if(a[i-1]==1)
		// 		before[i]=i;
		// 		else 
		// 		before[i]=before[i-1];
		// 	}
		// }
		// before array contains the station no. on the before side which is closest for reaching (i+1)th station
		// after[n-1]= a[n-1]==0?-1:n;
		// i=n-2;
		// if(n>=2 && a[n-1]!=2 && a[n-2]==0 )
		// {
		// 	after[n-2]=-1;
		// 	i=n-3;
		// }
		// for(;i>=0;i--)
		// {
		// 	if(a[i]!=0)
		// 	after[i]=i+1;
		// 	else 
		// 	{
		// 		if(a[i+1]==2)
		// 		after[i]=i;
		// 		else 
		// 		after[i]=after[i+1];
		// 	}
		// }
		// cout<<"A : \t";
		// printArr(a,n);
		// cout<<"before \t";
		// printArr(before,n);
		// cout<<"after \t";
		// printArr(after,n);
		// cout<<"Ans : \t";
		for(int i=0;i<m;i++)
		{
			// if(after[b[i]-1]==before[b[i]-1] && before[b[i]-1]==-1)
			// cout<<-1<<"\t";
			// else
			// cout<<min(abso(after[b[i]-1]-b[i]),abso(before[b[i]-1]-b[i]))<<"\t";
			if(after[b[i]-1]!=-1 && before[b[i]-1]!=-1)
			{
				cout<<min(abso(after[b[i]-1]-b[i]),abso(before[b[i]-1]-b[i]))<<"\t";
			}
			else if(before[b[i]-1]==-1 && after[b[i]-1]!=-1)
			{
				cout<<abso(after[b[i]-1]-b[i])<<"\t";
			}
			else if(after[b[i]-1]==-1 && before[b[i]-1]!=-1)
			{
				cout<<abso(before[b[i]-1]-b[i])<<"\t";
			}
			else
			{
				cout<<"-1\t";
			}
		}
		cout<<"\n";
	}
}