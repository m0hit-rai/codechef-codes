#include<iostream>
#include<map>
#define ll long long
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll a,y,x;
		cin>>a>>y>>x;
		ll total_candles_lit=0;
		if(a<y)
		{
			total_candles_lit=a*x +1;
		}
		else
		{
			total_candles_lit= y*x;
		}
		cout<<total_candles_lit<<endl;
		
	}
}