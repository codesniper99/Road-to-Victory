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

    ll n;
    cin>>n;
    vi price(n);
    REP(i,0,n)
    {

        cin>>price[i];
    }
    ll q;
    cin>>q;
    vi coins(q);

    REP(i,0,q)
    {
        cin>>coins[i];

    }

    sort(price.begin(),price.end());

    REP(i,0,q)
    {
        ll top,bot,mid;
        top=n-1;
        bot=0;
        mid=(top+bot)/2;

        while(top>=bot)
        {
            if(price[mid]>coins[i])
            {
                top=mid-1;
                mid=(top+bot)/2;

            }
            else
            {
                bot=mid+1;
                mid=(top+bot)/2;
            }

        }
        if(price[mid]<=coins[i])
            cout<<mid+1<<"\n";
        else
            cout<<mid<<"\n";
    }

    return 0;
}
