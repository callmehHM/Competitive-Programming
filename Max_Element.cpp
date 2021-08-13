#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{

    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
       cin>> a[i];
    }
   vector<int> v;
    for(int i=0;i<n;i++)
    {    int count=0;
        for(int j=0;j<n;j++)
        {
               if( a[i]<=a[j])
                {
                    count++;
                }
        }
         v.push_back(count*a[i]);
    }
    sort(v.begin(),v.end());

    cout<< v.back()<<endl;


    return  0;
}