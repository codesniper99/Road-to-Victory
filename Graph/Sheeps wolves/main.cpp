//solvedddddd :SDDDDDDD
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


bool isValid(ll row, ll col, char board[500][500],ll rmax,ll cmax)
{
    return ((row >= 0) && (row < rmax) &&
           (col >= 0) && (col < cmax)  );
}
int main()
{
    ios::sync_with_stdio(0);
    ll r,c;
    cin>>r>>c;
    char board[500][500];
    REP(i,0,r)
    {
        REP(j,0,c)
        {
            cin>>board[i][j];

        }
    }
ll flag=0;
    REP(i,0,r)
    {
        REP(j,0,c)
        {
                if(board[i][j]=='S')
                {
                    if(isValid(i-1,j,board,r,c))
                    {
                        if(board[i-1][j]=='W')
                        {
                            flag=1;
                            break;
                        }
                        else
                        {
                            if(board[i-1][j]!='S')
                            board[i-1][j]='D';
                        }
                    }

                    if(isValid(i,j-1,board,r,c))
                    {
                        if(board[i][j-1]=='W')
                        {
                            flag=1;
                            break;
                        }
                        else
                        {

                            if(board[i][j-1]!='S')
                            board[i][j-1]='D';
                        }
                    }
                    if(isValid(i+1,j,board,r,c))
                    {
                        if(board[i+1][j]=='W')
                        {
                            flag=1;
                            break;
                        }
                        else
                        {

                            if(board[i+1][j]!='S')
                            board[i+1][j]='D';
                        }
                    }
                    if(isValid(i,j+1,board,r,c) )
                    {
                        if(board[i][j+1]=='W')
                        {
                            flag=1;
                            break;
                        }
                        else
                        {
                            if(board[i][j+1]!='S')
                            board[i][j+1]='D';
                        }
                    }

                }
        }
        if(flag)
        {
            break;
        }
    }

    if(flag)
        cout<<"No\n";
    else
    {
        cout<<"Yes\n";
        REP(i,0,r)
        {
            REP(j,0,c)
            {
                cout<<board[i][j];
            }
            cout<<"\n";
        }
    }


    return 0;
}
