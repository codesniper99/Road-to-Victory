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
    string a,b;
    cin>>a>>b;
    ll n;
    cin>>n;
    REP(i,0,n)
    {
        string ans1,ans2;
        cin>>ans1>>ans2;

        cout<<ans2<<" ";
        if(strcmp(ans1,a)==0)
            cout<<b<<"\n";
        else
            cout<<a<<"\n";


    }


    return 0;
}
