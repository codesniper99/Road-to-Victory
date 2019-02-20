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
        vi a(n);
        REP(i,0,n)
        {
            cin>>a[i];

        }
        ll maxi=1;
        ll start=a[0];
        ll length=1;
        REP(i,1,n)
        {
            if(a[i]>=start)
                {length++;
                start=a[i];
                }
            else
            {
                start=a[i];
                if(length>maxi)
                    maxi=length;
                length=1;

            }
        }
         if(length>maxi)
                    maxi=length;
        cout<<maxi<<'\n';


        return 0;
    }
