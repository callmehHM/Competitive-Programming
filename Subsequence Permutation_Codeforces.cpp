#include <bits/stdc++.h>
using namespace std;
 
int main()
{int t;
cin>>t;
while(t--){
	int n;
	cin>>n;
    string s;
    cin>>s;
    int count=0,a=0;
    string k = s;
	sort(begin(s),end(s));
    while(a<n)
    {
        if(s[a]!=k[a])
        {count++;}
        a++;
    }
    cout<<count<<"\n";
	}
    return 0;
    
}
