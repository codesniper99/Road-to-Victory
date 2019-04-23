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
    ll m;
    cin>>m;
    map<ll,ll> mapper;
    mapper.clear();
    vi a(n);
    REP(i,0,n)
        {
            cin>>a[i];
            mapper[a[i]]++;
        }
    vi distinct(n);
    distinct.clear();
    ll start=0;
    for(auto x:mapper)
    {
        start++;
    }
    distinct[0]=start;
    mapper[a[0]]--;
    if(mapper[a[0]]==0)
            {   start--;
            }
    REP(i,1,n)
    {
        mapper[a[i]]--;
       // cout<<i<<" "<<start<<"\n";
        if(mapper[a[i]]==0)
            {   distinct[i]=start;
                start--;
            }
        else
            distinct[i]=start;
    }

    vi in(m);
    //cout<<"lol\n";

    REP(i,0,m)
        {
            ll x;
            cin>>x;
            cout<<distinct[x-1]<<"\n";

        }




    return 0;
}
