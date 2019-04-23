#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>


using namespace __gnu_pbds;

#define ll long long int
#define li long int
using namespace std;

typedef vector<long long int> vi;
typedef pair<ll, ll> pi;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> indexed_set;


#define EB emplace_back
#define REP(i, x, y) for(long long int i=x ; i<y ; i++)
#define F first
#define PB push_back
#define S second
#define MP make_pair
#define MT make_tuple
#define INF 9999999
#define MOD 1000000007


bool isValid(ll row, ll col, ll board[50][50],ll rowmax,ll colmax)
{
    return ((row >= 0) && (row < rowmax) &&
           (col >= 0) && (col < colmax) && (board[row][col]==0) );
}

int main()
{
    ios::sync_with_stdio(0);
    ll n;
    cin>>n;
    ll dp[10001];
    dp[1]=19;
    REP(i,2,n+1)
    {
        ll num=dp[i-1];
        ll flag=0;
        for(ll j=1;j;j++)
        {
            ll x=num+j;
            ll sum=0;
            while(x)
            {
                sum+=x%10;
                x=x/10;
            }
            if(sum==10)
                {flag=j;break;}
        }
        dp[i]=num+flag;

    }
    cout<<dp[n]<<"\n";


    return 0;
}
