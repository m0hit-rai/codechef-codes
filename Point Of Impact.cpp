#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(;t>0;t--)
	{
		int n,k,x,y;
		cin>>n>>k>>x>>y;
		int change_forward,change_backward;
		change_forward=min(n-x,n-y);
		change_backward=min(x,y);
		k=k%4;
		if(k == 0)
		{
			k=4;
		}
		if(x==y)
		{
			cout<<n<<" "<<n<<endl;
			continue;
		}
		int coord_x[4],coord_y[4];
		
		coord_x[0]=x+change_forward;
		coord_y[0]=y+change_forward;

		coord_x[1]=coord_y[0];
		coord_y[1]=coord_x[0];

		coord_x[3]=x-change_backward;
		coord_y[3]=y-change_backward;

		coord_x[2]=coord_y[3];
		coord_y[2]=coord_x[3];

		cout<<coord_x[k-1]<<" "<<coord_y[k-1]<<endl;
	}
}