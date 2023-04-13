#include<iostream>
using namespace std;
bool isSorted(int *arr, int n)
{
   //base case
   if(n == 0 || n == 1)
   return 1;
   if(arr[0]>arr[1])
   return 0;
   else
   {
   bool rem = isSorted(arr+1,n-1);
   return rem;
   }
}
int main()
{
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    if(isSorted(arr,n))
    cout<<"Sorted";
    else
    cout<<"Not Sorted";
}