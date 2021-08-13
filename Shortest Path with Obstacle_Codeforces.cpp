#include <bits/stdc++.h>
using namespace std;
 
int main()
{int t;
cin>>t;
while(t--){
int xa,xb,xc,ya,yb,yc;
cin>>xa>>ya>>xb>>yb>>xc>>yc;
int count=0;
if((xa==xb))
{
    if((xc==xb) && (yc>min(ya,yb) && yc<max(ya,yb)))
    {count=abs(yb-ya)+2;}     
    else{count=abs(yb-ya);}
}
else if(ya==yb)
{
    if((yc==yb) && (xc>min(xa,xb))&& (xc<max(xa,xb)))
    {count=abs(xb-xa)+2;}     
    else{count=abs(xb-xa);}
}
else
{
    count = abs(xb-xa)+abs(yb-ya);
}
cout<<count<<"\n";
}
    return 0;
    
}
