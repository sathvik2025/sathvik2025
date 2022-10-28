#include<bits/stdc++.h>
#include<vector>
using namespace std;
#define ll long long
#define ld long double
#define vi vector<int>
#define vll vector<long long>
#define pii pair<int,int>
#define gcd __gcd
#define PI 3.1415926535897932384626433832795
#define inf INT_MAX
#define minf INT_MIN
#define lmax LLONG_MAX
#define  pb push_back
#define w(t)  long long int t; cin>>t; while(t--)
#define f(i,a,n) for(long long int i=a;i<n;i++)
#define g(i,a,n) for(long long int i=a;i>n;i--)
#define all(x) x.begin(),x.end()
#define endl "\n"
#define Mod 1000000007
#define mod 998244353
int main()
{
    ll n;
    cin>>n;
    vector<pair<ll,string>> m;
    vector<pair<string,ll>> v;
    vector<multiset<string>> y;
    f(i,0,n)
    {
        string s;
        cin>>s;
        m.pb({s.size(),s});
    }
    
    sort(all(m));
    f(i,0,m.size())
    {
        v.pb({m[i].second,m[i].first});
    }
     ll ct=m[0].first,pt=0,j;
     multiset<string> k;
    for(ll i=0;i<m.size();)
    { 
       if(m[i].first==ct)
       {
          k.insert(m[i].second);
          i++;
          continue;
       }
       else 
       {
        y.pb(k);
        k.clear();
          ct=m[i].first;
       }
    }
    y.pb(k);
    
    f(i,0,y.size())
    {
    for(auto x: y[i])
    {
        cout<<x<<endl;
    }
    }
    
    
}