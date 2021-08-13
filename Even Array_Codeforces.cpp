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
    int count=0;
    int odd=0;
    int even=0;
    vector<ll> v(n);
    for(ll i = 0 ; i<n;i++)
    {cin>>v[i];
    if((v[i]%2)!=(i%2))
    {count++;
    if(v[i]%2==0)
    even++;
    else odd++;
    }
    }
    if(even==odd && count%2==0)
    {
        cout<<count/2<<endl;}
    else{
        cout<<-1<<endl;
    }
 
    }
 
        
 return 0;
}
