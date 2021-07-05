#include<iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char board[3][3];
		int cnt_wnis=0;
		int cnt_stps_x=0,cnt_stps_o=0;
		char winr1,winr2;
		for(int i=0;i<3;i++)
		{
			for(int j=0;j<3;j++)
			{
				cin>>board[i][j];
				if(board[i][j] == 'X')
				{
					cnt_stps_x++;
				}
				else if(board[i][j] == 'O')
				{
					cnt_stps_o++;
				}
			}
		}
		if((board[0][0]==board[0][1]) && (board[0][1]==board[0][2]) && (board[0][2] != '_'))//Row 1
		{
			cnt_wnis++;
			winr1=board[0][0];			
		}		

		if((board[1][0]==board[1][1]) && (board[1][1]==board[1][2]) && (board[1][2] != '_'))//R0w 2
		{
			cnt_wnis++;
			if(cnt_wnis>1)
			winr2=board[1][1];
			else
			winr1=board[1][1];			
		}		
		
		if((board[2][0]==board[2][1]) && (board[2][1]==board[2][2]) && (board[2][2] != '_'))//Row 3
		{
			cnt_wnis++;
			if(cnt_wnis>1)
			winr2=board[2][1];
			else
			winr1=board[2][1];			
		}
		
		if((board[0][0]==board[1][0]) && (board[1][0]==board[2][0]) && (board[2][0] != '_'))//Col 1 
		{
			cnt_wnis++;
			if(cnt_wnis>1)
			winr2=board[1][0];
			else
			winr1=board[1][0];			
		}
		
		if((board[0][1]==board[1][1]) && (board[1][1]==board[2][1]) && (board[2][1] != '_'))//col 2
		{
			cnt_wnis++;
			if(cnt_wnis>1)
			winr2=board[1][1];
			else
			winr1=board[1][1];			
		}		
		
		if((board[0][2]==board[1][2]) && (board[1][2]==board[2][2]) && (board[2][2] != '_'))//col 3
		{
			cnt_wnis++;
			if(cnt_wnis>1)
			winr2=board[1][2];
			else
			winr1=board[1][2];			
		}		
		
		if((board[0][0]==board[1][1]) && (board[1][1]==board[2][2]) && (board[2][2] != '_'))//prim diag
		{
			cnt_wnis++;
			if(cnt_wnis>1)
			winr2=board[1][1];
			else
			winr1=board[1][1];			
		}		
		
		if((board[0][2]==board[1][1]) && (board[1][1]==board[2][0]) && (board[2][0] != '_'))//secon diag
		{
			cnt_wnis++;
			if(cnt_wnis>1)
			winr2=board[1][1];
			else
			winr1=board[1][1];			
		}		

		if((cnt_wnis>2) || ((cnt_wnis==2) && (winr1 != winr2)) || (cnt_stps_o>cnt_stps_x) || (cnt_stps_x>(cnt_stps_o+1)) || ((winr1=='X') && (cnt_stps_o==cnt_stps_x)) || ((winr1=='O') && (cnt_stps_o!=cnt_stps_x)) )
		{
			cout<<"3"<<endl;
			//cout<<cnt_wnis<<"\t"<<cnt_stps_o<<"\t"<<cnt_stps_x<<endl;
		}
		else if((cnt_wnis==1) || ((cnt_stps_o+cnt_stps_x)==9))
		{
			cout<<"1"<<endl;
			//cout<<cnt_wnis<<"\t"<<(cnt_stps_o+cnt_stps_x)<<endl;
		}
		else
		{
			cout<<"2"<<endl;
		}
	}

}