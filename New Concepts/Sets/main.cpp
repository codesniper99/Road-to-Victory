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
    set<ll> s;
    s.insert(5);
    s.insert(7);
    s.insert(85);
    s.insert(79);
    s.insert(-1);
    for( auto i:s)
    {
        cout<<i<<"\n";
    }
    cout<<"\n\n";
    ll x=85;
    s.erase(x);

    for( auto i:s)
    {
        cout<<i<<"\n";

    }

    cout<<"\n\n";
    auto t =s.find(7);
    cout<<*t;

    multiset<ll,ll> mm;
    mm.insert(5);

    return 0;
}
