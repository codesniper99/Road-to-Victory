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
    for(std::map<ll,ll>::iterator j =mapper.begin();j!=mapper.end();j++)
    {
        start++;
    }
    distinct[0]=start;
    vi bias(n,0);
    bias[0]=start;
    REP(i,1,n)
    {
        mapper[a[i]]--;
        if(mapper[a[i]]==0)
            {distinct[i]=distinct[i-1]-1;bias[i]=distinct[i]+1;}
        else
            {distinct[i]=distinct[i-1];bias[i]=distinct[i];}

    }

    vi in(m);
    REP(i,0,m)
        {
            ll x;
            cin>>x;
            cout<<bias[x-1]<<"\n";
        }




    return 0;
}
