#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {ll n;
    cin>>n;
    vector<ll> v(n);
    vector<ll> u(n);
    for(ll i = 0 ; i<n;i++)
    {cin>>v[i];}
    for(ll i = 0 ; i<n;i++)
    {cin>>u[i];}
    ll m1 = *min_element(v.begin(),v.end());
    ll m2 = *min_element(u.begin(),u.end());
    ll sum = 0 ;
    for(ll i=0;i<n;i++)
    {
        sum+=max(v[i]-m1,u[i]-m2);
    }
 
    cout<<sum<<endl;
 
}
 
        
 return 0;
}
