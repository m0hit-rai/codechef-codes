#include <iostream>
#include<string>
#include <bits/stdc++.h>
using namespace std;

int main() {
	double n;
	std::cin >> n;
	double pow_of_5=(double)(pow(5,n));
	std::string answer= std::to_string(pow_of_5);
	cout<<pow_of_5<<endl;
	cout<<answer<<endl;
	if(answer.find('.') != std::string::npos)
    {
        
        answer = answer.substr(0, answer.find_last_not_of('0')+1);
        if(answer.find('.') == answer.size()-1)
        {
            answer = answer.substr(0, answer.size()-1);
        }
    }
	cout<<answer[answer.length()-2]<<answer[answer.length()-1]<<endl;

	return 0;
}
/*
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
#include <functional> // for less 
using namespace __gnu_pbds; 
using namespace std;
#define int long long
#define endl "\n"
#define deb(x) cout<<#x<<" "<<x<<endl;
#define sc(ar,n) for(int pen=0;pen<n;pen++){ cin>>ar[pen];}
#define pr(ar,n) for(int pen=0;pen<n;pen++){ cout<<ar[pen]<<" ";} cout<<endl;
#define fr(i,x,n) for(int i=x;i<n;i++)
#define frt(it,vb) for(auto it=vb.begin();it!=vb.end();it++)
#define mem(ar,x) memset(ar,x,sizeof(ar));
#define pb push_back
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mod 1000000007
#define rt return 0;
#define ct continue;
#define MAX 1000000000000000000
#define MAX1 1000000000
#define CLK clock_t clk = clock();//Start of main
#define OCLK cerr << "Time (in ms): " << (double)(clock() - clk) * 1000.0 / CLOCKS_PER_SEC << '\n';//End of main
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> 

inline int solve()
{
    int n;
    cin>>n;
    cout<<25<<endl;
}
signed main()
{
    // fastio;
    int t;
    int test_cases=1;
    if(test_cases==0)
    cin>>t;
    else
    t=1;
    while(t--){
        solve();
    }
}*/