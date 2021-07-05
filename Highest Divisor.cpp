#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int d=10;
	while(d!=1)
	{
		if(n%d==0)
		{
			cout<<d<<endl;
			break;
		}
		d--;
	}
	
}