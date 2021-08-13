#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
ll t;
cin>>t;
while(t--)
{
    ll n;
    cin>>n;
    if(n<=6)
    {
        cout<<15<<"\n";
    }
    else
    {
        if(n%2==0)
        {cout<<n*5/2<<"\n";}
        else{cout<<(n+1)*5/2<<"\n";}
    }
}
 return 0;
}
