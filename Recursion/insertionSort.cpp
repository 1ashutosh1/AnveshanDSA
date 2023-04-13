#include<bits/stdc++.h>
using namespace std;
void InsertionSort(int *arr,int n)
{
  //base case
  if(n==1 || n==0)
  return;
  
  InsertionSort(arr,n-1);
  int last=arr[n-1];
  int j=n-2;
  for(;j>=0;j--)
  {
    if(arr[j]>last)
    arr[j+1]=arr[j];
    else
    break;
  }
  arr[j+1]=last;
}
int main()
{
 int arr[] = { 10, 1, 9, 2, 8, 11 }; 
 int n = 6;
 cout<<"Sorted array is "<<endl;
 InsertionSort(arr,n);
 for(int i=0;i<6;i++)
 cout<<arr[i]<<" ";
 cout<<endl;
}