#include <iostream>
using namespace std;
#include <vector>
int main() {
 
	int n,m;cin>>n>>m;
    int count=0,in=n*m,inn=n*m;
    while(inn--)
    {char temp;
        cin>>temp;
        if(temp=='B'||temp=='W'||temp=='G')
        {count++;}
        else{cout<<"#Color";
        break;}
    }
    if(count==in)
    cout<<"#Black&White";
	return 0;
}
