#include <bits/stdc++.h>
using namespace std;

int sum(long long int a)
{int s=0;
    while(a>0)
    {s+=a%10;
    a/=10;
    }
    return s;
}
int main(){
int t;
cin>>t;
for(int k=0;k<t;k++)
{
    long long int n;long long int count=0;
    cin>>n;
    if(n%10==9)
    {count=count+1;}
    count+=n/10;
    cout<<count<<"\n";
    }
return 0;
}
