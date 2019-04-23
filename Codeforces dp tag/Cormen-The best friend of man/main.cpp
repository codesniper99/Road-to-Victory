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
    ll n,k;
    cin>>n>>k;
    vi a(n);
    REP(i,0,n)
    {
        cin>>a[i];
    }
    if(n==1)
    {
           cout<<"0\n"<<a[0];
    }
    else
    {
        ll sum=a[0]+a[1];
        vi ans(n,0);
        ll total=0;
        ans[0]=a[0];

        REP(i,1,n)
        {
            ans[i]=a[i];
            sum=ans[i]+ans[i-1];
            if(sum<k)
            {
                ans[i]+=k-sum;
                total+=k-sum;
            }
        }

        cout<<total<<"\n";

        REP(i,0,n)
        {
            cout<<ans[i]<<" ";
        }

    }



    return 0;
}
