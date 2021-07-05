#include<iostream>
using namespace std;
float round(float var)
{
    float value = (int)(var * 100 + .5);
    return (float)value / 100;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		float k1,k2,k3,v,v_new;
		cin>>k1>>k2>>k3>>v;
		v_new=v*k1*k2*k3;
		if( round(100/v_new) >= 9.58f )
		{
			cout<<"No"<<endl;
		}
		else
		{
			cout<<"Yes"<<endl;
		}
	}
}