#include<iostream>
#include<set>
#include<algorithm>
#include <bits/stdc++.h> 
using namespace std;
int bitwise_OR_of_V(int v,int x)
{
	char bin_v[21],bin_x[21];
	itoa(v,bin_v,2);
	itoa(x,bin_x,2);
	char key='\0';

	auto it=find(bin_v,bin_v+16,key);
	int index_for_v=it-bin_v;
	
	it=find(bin_x,bin_x+16,key);
	int index_for_x=it-bin_x;
	
	char after_OP[16];
	int i=0;
	if(index_for_v>index_for_x)
	{
		
		while(i<index_for_v - index_for_x)
		{
			if(bin_v[i]=='0')
			{
				after_OP[i]='0';
			}
			else
			{
				after_OP[i]='1';
			}
			i++;
		}
		while(i<index_for_v)
		{
			if(bin_v[i]=='0' && bin_x[i-(index_for_v - index_for_x)]=='0')
			{
				after_OP[i]='0';
			}
			else
			{
				after_OP[i]='1';
			}
			i++;
		}
		after_OP[i]='\0';
	}
	else if(index_for_v<index_for_x)
	{
		while(i<index_for_x - index_for_v)
		{
			if(bin_x[i]=='0')
			{
				after_OP[i]='0';
			}
			else
			{
				after_OP[i]='1';
			}
			i++;
		}
		while(i<index_for_x)
		{
			if(bin_x[i]=='0' && bin_v[i-(index_for_x - index_for_v)]=='0')
			{
				after_OP[i]='0';
			}
			else
			{
				after_OP[i]='1';
			}
			i++;
		}
		after_OP[i]='\0';
	}
	else
	{
		while(i<index_for_x)
		{
			if(bin_x[i]=='0' && bin_v[i-(index_for_v - index_for_x)]=='0')
			{
				after_OP[i]='0';
			}
			else
			{
				after_OP[i]='1';
			}
			i++;
		}
		after_OP[i]='\0';
	}
	//cout<<"After OP="<<after_OP;

	long long int int_value = atoll(after_OP);
	int x_ind=0,num=0;
	while(int_value>0)
	{
		int k= int_value%10;
		int pow_2=k*pow(2,x_ind);
		num+=pow_2;
		int_value/=10;
		x_ind++;
	}
	//cout<<"\nInt Val="<<int_value;

	//char int_of_new_V[10];
	//itoa(int_value,int_of_new_V,10);
	//v=atoi(int_of_new_V);
	//cout<<"\nDecimal Value="<<int_of_new_V;
	return num;
	//cout<<bin_v<<endl<<bin_x;
	//cout<<"\nV="<<index_for_v<<endl<<"x="<<index_for_x<<endl;
}
int bitwise_AND_of_V(int v,int x)
{
	char bin_v[21],bin_x[21];
	itoa(v,bin_v,2);
	itoa(x,bin_x,2);
	char key='\0';

	auto it=find(bin_v,bin_v+16,key);
	int index_for_v=it-bin_v;
	
	it=find(bin_x,bin_x+16,key);
	int index_for_x=it-bin_x;
	
	char after_OP[16];
	int i=0;
	if(index_for_v>index_for_x)
	{
		
		while(i<index_for_v - index_for_x)
		{
			after_OP[i]='0';
			i++;
		}
		while(i<index_for_v)
		{
			if(bin_v[i]=='1' && bin_x[i-(index_for_v - index_for_x)]=='1')
			{
				after_OP[i]='1';
			}
			else
			{
				after_OP[i]='0';
			}
			i++;
		}
		after_OP[i]='\0';
	}
	else if(index_for_v<index_for_x)
	{
		while(i<index_for_x - index_for_v)
		{
			after_OP[i]='0';
			i++;
		}
		while(i<index_for_x)
		{
			if(bin_x[i]=='1' && bin_v[i-(index_for_x - index_for_v)]=='1')
			{
				after_OP[i]='1';
			}
			else
			{
				after_OP[i]='0';
			}
			i++;
		}
		after_OP[i]='\0';
	}
	else
	{
		while(i<index_for_x)
		{
			if(bin_x[i]=='1' && bin_v[i-(index_for_x - index_for_v)]=='1')
			{
				after_OP[i]='1';
			}
			else
			{
				after_OP[i]='0';
			}
			i++;
		}
		after_OP[i]='\0';
	}
	//cout<<"After OP="<<after_OP;

	long long int int_value = atoll(after_OP);
	int x_ind=0,num=0;
	while(int_value>0)
	{
		int k= int_value%10;
		int pow_2=k*pow(2,x_ind);
		num+=pow_2;
		int_value/=10;
		x_ind++;
	}
	//cout<<"\nInt Val="<<int_value;

	//char int_of_new_V[10];
	//itoa(int_value,int_of_new_V,10);
	
	//cout<<"\nDecimal Value="<<int_of_new_V;
	return num;
	//cout<<bin_v<<endl<<bin_x;
	//cout<<"\nV="<<index_for_v<<endl<<"x="<<index_for_x<<endl;
}

int main()
{
	set<int> s;
	s.insert(0);
	//int v,x;
	//cin>>v>>x;
	//v=bitwise_OR_of_V(v,x);

	//cout<<"New V="<<v;

	int t;
	cin>>t;
	while(t--)
	{
		int n,m,v=0;
		cin>>n>>m;
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			v=bitwise_OR_of_V(v,x);
			cout<<"V="<<v<<endl;
			s.insert(v);
			s.insert(x);
		}
		for(int i=0;i<m;i++)
		{
			int y;
			cin>>y;
			v=bitwise_AND_of_V(v,y);
			cout<<"V="<<v<<endl;
			s.insert(v);
			s.insert(y);
		}
		cout<<s.size()<<endl;

	}

}