#include<iostream>
using namespace std;
int power(int n)
{
   //base case
   if(n==0)
   return 1;
   int sp=power(n-1);
   int bp=2*sp;
   return bp;
}
int main()
{
    int n;
    cin>>n;
    int ans=power(n);
    cout<<ans;
}