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

    string s;
    cin>>s;
    ll num=0;
    ll len=s.length();
    vi left;
    vi right;
    ll left_start=0;
    REP(i,0,len)
    {
        if(s[i]=='Q')
        {
            left_start++;
        }
        else if(s[i]=='A')
        {
            left.PB(left_start);
        }
    }
    ll right_start=0;
    for(ll j=len-1;j>=0;j--)
    {
        if(s[j]=='Q')
        {
            right_start++;
        }
        else if(s[j]=='A')
        {
            right.PB(right_start);
        }
    }

    ll len1=left.size();

    REP(i,0,len1)
    {
        num+=left[i]*right[len1-i-1];
       // cout<<left[i]<<" "<< right[i]<<"\n";
    }

    cout<<num<<'\n';



    return 0;
}
