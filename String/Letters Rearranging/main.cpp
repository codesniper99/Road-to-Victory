//soolvedd
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
    string s;
    REP(i,0,n)
    {
        cin>>s;
        ll len=s.size();
        map<char,ll> m;
        m.clear();

        REP(j,0,len)
        {
            m[s[j]]++;
        }
        string t;
        t.clear();
        for(auto j:m)
        {
            REP(k,0,j.second)
                t+=j.first;

        }
        ll flag=0;
        REP(j,0,len)
        {
            if(t[j] != t[len-j-1]){
            flag = 1;
            break;
        }
        }
        //cout<<t<<'\n';
        if(flag)
        {
            cout<<t<<"\n";

        }
        else
        {
            cout<<-1<<"\n";
        }

        /*
        if(len%2==0)
        {
            ll flag=0;
            for(auto j:m)
            {
                if(j.second%2==1)
                {
                    flag=1;
                    break;
                }
            }
            if(flag)
                {
                    for(auto j:m)
                    {
                        REP(k,0,j.second+1)
                        {
                            cout<<j.first;
                        }
                    }
                    cout<<"\n";
                }
            else
            {
                cout<<"-1\n";continue;
            }

        }
        else
        {
            ll flag=0;
            ll counter=0;
            for(auto j:m)
            {
                if(j.second%2==1)
                {
                    counter++;
                    if(counter>=2)
                    {
                        flag=1;
                        break;
                    }
                }
            }
            if(flag)
                {

                    for(auto j:m)
                    {
                        REP(k,0,j.second+1)
                        {
                            cout<<j.first;
                        }
                    }
                    cout<<"\n";

                }
            else
            {
                cout<<"-1\n";continue;
            }

        }
        */
    }



    return 0;
}
