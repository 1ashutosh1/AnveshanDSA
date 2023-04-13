#include<iostream>
using namespace std;
void words(int n,string arr[])
{
  //Base Case
  if(n==0)
  return;

  int digit=n%10;
   n=n/10;
  words(n,arr);
 cout<<arr[digit]<<" ";
}
int main()
{
    int n;
    cin>>n;
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    words(n,arr);
}