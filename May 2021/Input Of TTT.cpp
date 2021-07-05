#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include <iostream>
#include <fstream>
#define ll long long
using namespace std;
ofstream myfile ("New Text Document.txt");
int x=0;
void printS(string s)
{
	x++;
	if (myfile.is_open())
	{
		myfile<<x<<" .) "<<endl;
		myfile<<s[0]<<s[1]<<s[2]<<endl;
		myfile<<s[3]<<s[4]<<s[5]<<endl;
		myfile<<s[6]<<s[7]<<s[8]<<endl;
	}
	else cout << "Unable to open file";
}
void inputSetGenerate(string s, int n)
{
	if(n==9)
	{
		printS(s);
		return;
	}
	inputSetGenerate(s+'_',n+1);
	inputSetGenerate(s+'X',n+1);
	inputSetGenerate(s+'O',n+1);
}
int main()
{
	inputSetGenerate("",0);
	getchar();
}