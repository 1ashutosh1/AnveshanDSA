#include<bits/stdc++.h>
using namespace std;
int fib(int n)
{
  //base case
  if(n==0)
  return 0;

 if(n==1)
 return 1;

fib(n-1)+fib(n-2);
cout<<n<<" ";
}
int main()
{
    int n;
    cin>>n;
    fib(n);
}