#include<iostream>
using namespace std;
void print(int arr[],int size)
{
  cout<<"Size of the array is "<< size<<endl;
  for(int i=0;i<size;i++)
  cout<<arr[i]<<" ";
  cout<<endl;
}
bool Search(int arr[],int n,int k)
{
    print(arr,n);
    //base case
    if(n == 0)
    return 0;

    if(arr[0]==k)
    return 1;

    else
    return Search(arr+1,n-1,k);
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
    bool ans = Search(arr,n,key);
    if(ans)
    cout<<"Found";
    else
    cout<<"Not Found";
}