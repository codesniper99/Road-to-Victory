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
    string s;
    cin>>s;
    ll sym=-1,num=0;
     ll len=s.size();

    REP(i,0,len)
    {
        if(s[i]-'a'>sym)
        {
            sym=s[i]-'a';
            num=1;

        }
        else if(s[i]-'a'==sym)
        {
            num++;
        }
        else;

    }
    string ans;
    ans.clear();
    REP(i,0,num)
    {
        char t = char('a'+sym);
        ans+=t;
    }

    cout<<ans;


    return 0;
}
