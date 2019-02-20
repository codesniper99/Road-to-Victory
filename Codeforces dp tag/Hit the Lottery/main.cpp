//solvedd
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
    ll number=0;
    ll remainder =n;

    number+=n/100;
    remainder-=(remainder/100)*100;

    number+=remainder/20;
    remainder-=(remainder/20)*20;

    number+=remainder/10;
    remainder-=(remainder/10)*10;

    number+=remainder/5;
    remainder-=(remainder/5)*5;

    number+=remainder/1;

    cout<<number<<'\n';




    return 0;
}
