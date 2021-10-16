#include <bits/stdc++.h>
using namespace std;

int main(){

   int t;
   cin>>t;
   while(t--)
   {
       vector<int> nums(4);
       for(int i=0;i<4;i++)
       {cin>>nums[i];}
    int a = nums[0];
    int b = nums[1];
    int c = nums[2];
    int d = nums[3];
       sort(nums.begin(),nums.end());
       if((a==nums[3]&&b==nums[2])||(a==nums[2]&&b==nums[3]))
       {
           cout<<"NO"<<endl;
       }
       else if((c==nums[3]&&d==nums[2])||(c==nums[2]&&d==nums[3]))
       {
           cout<<"NO"<<endl;
       }
       else{cout<<"YES"<<endl;}
       
   }
 return 0;

}
