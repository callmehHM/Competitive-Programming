#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {int x,y,n;
    cin>>x>>y>>n;
    int r = n%x;
    if(y>r)
    {
        int temp = x-y+r;
        cout<<n-temp<<endl;
    }
    else {cout<<n-(r-y)<<endl;}
}
        
 return 0;
}
