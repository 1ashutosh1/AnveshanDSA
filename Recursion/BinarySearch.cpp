#include<iostream>
using namespace std;
void print(int arr[],int s,int e)
{
  for(int i=s;i<=e;i++)
  cout<<arr[i]<<" ";
  cout<<endl;
}
bool binarySearch(int arr[],int s,int e,int k)
{
    print(arr,s,e);
    //base case
    if(s>e)
    return 0;

    int mid=s+(e-s)/2;
    cout<<"Value of mid element is "<<arr[mid]<<endl;
    if(arr[mid]==k)
    return 1;
   
    else if(arr[mid]<k)
    return binarySearch(arr,mid+1,e,k);

    else
    return binarySearch(arr,s,mid-1,k);
}
int main()
{
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<"Enter no to be searched"<<endl;
    int key;
    cin>>key;
    int s=0,e=n-1;
    bool ans = binarySearch(arr,s,e,key);
    if(ans)
    cout<<"Found";
    else
    cout<<"Not Found";
}