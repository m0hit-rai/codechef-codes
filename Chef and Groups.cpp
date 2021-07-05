#include<iostream>
#include<string>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string seats;
		cin>>seats;
		int count=0;
		int n=seats.length();
		for(int i=0; i<=n-2;i++)
		{
			if(seats[i]=='1' && seats[i+1]=='0')
			{
				count++;
				i++;
			}
		}
		if(seats[n-1] == '1')
		{
			count++;
		}
		cout<<"Answer = "<<count<<endl;
	}
}