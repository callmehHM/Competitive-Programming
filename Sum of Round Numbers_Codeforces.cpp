#include <bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
for(int k=0;k<t;k++)
{
    int n;
    cin>>n;
    int count=0;
    vector<int> num;
    while(n>0)
    {
        int r = n%10;
        if(r!=0)
        {num.push_back(r*pow(10,count));}
        n/=10;
        count++;
    }
    cout<<num.size()<<"\n";
    for(int a:num)
    {
        cout<<a<<" "; 
    }    
 
 
    cout<<"\n";
}
 
 
    
return 0;
}
