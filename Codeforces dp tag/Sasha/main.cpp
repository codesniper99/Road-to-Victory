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


int main()
{
    ios::sync_with_stdio(0);

    ll n,v;
    cin>>n>>v;
    ll ans=0;

    vi dp(n,0);

    ll litres=1;
    dp[2]=1;
    REP(i,3,n)
    {
        if(litres+1>v)
            litres--;
        else
        {
            cost=min(cost,dp[i-1]+i)

        }
    }





    return 0;
}
