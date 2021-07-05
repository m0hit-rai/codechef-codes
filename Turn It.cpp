#include<iostream>
#include<cmath>
#include<map>
#define db double
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		db u,v,a,s;
		cin>>u>>v>>a>>s;
		if(v<u)
		{
			db v_new=sqrt(u*u - 2*a*s);
			if(v_new>v)
			{
				cout<<"No"<<endl;
				continue;
			}
			//else
			//{
				//cout<<"Yes"<<endl;
			//}
		}
		//else
		//{
			//cout<<"Yes"<<endl;
		//}
		cout<<"Yes"<<endl;
	}
}