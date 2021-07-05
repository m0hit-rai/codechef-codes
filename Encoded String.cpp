#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	int t;
	char letters[16]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p'};
	cin>>t;
	for(;t>0;t--)
	{
		int n;
		cin>>n;
		char encoded_string[n];
		cin>>encoded_string;
		for(int i=0;i<n;i+=4)
		{
			int beg=1,end=16,letters_index;
			if(encoded_string[i]=='0')
			{
				end-=8;
			}
			else
			{
				beg+=8;
			}
			if(encoded_string[i+1] =='0')
			{
				end-= 4;
			}
			else
			{
				beg+=4;
			}	
			if(encoded_string[i+2] =='0')
			{
				end-= 2;
			}
			else
			{
				beg+=2;
			}
			if(encoded_string[i+3] =='0')
			{
				letters_index=beg-1;
			}
			else
			{
				letters_index=end-1;
			}
			
			cout<<letters[letters_index];

		}
		cout<<endl;
	}
	
	return 0;
}