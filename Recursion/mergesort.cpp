#include<iostream>
using namespace std;
void merge(int *arr,int s,int e)
{  
    int mid= s+(e-s)/2;
    int len1=mid-s+1;
    int len2=e-mid;

    int *first = new int[len1];
    int *second = new int [len2];
    
    int mainIndex=s;
    for(int i=0;i<len1;i++)
        first[i]=arr[mainIndex++];
    for(int i=0;i<len2;i++)
        second[i]=arr[mainIndex++];

    //Merge 2 sorted arrays
    int index1=0;
    int index2=0;
    mainIndex=s;
    while(index1<len1 && index2<len2)
    {
        if(first[index1]<second[index2])
        arr[mainIndex++]=first[index1++];
        else
        arr[mainIndex++]=second[index2++];
    }
   while(index1<len1)
   arr[mainIndex++]=first[index1++];

   while(index2<len2)
   arr[mainIndex++]=second[index2++];

   delete []first;
   delete []second;
}
void mergeSort(int *arr,int s,int e)
{
    //base case
    if(s>=e)
    return;

    int mid=s+(e-s)/2;
    //Left Part 
    mergeSort(arr,s,mid);

    //Right Part
    mergeSort(arr,mid+1,e);

    merge(arr,s,e);
}
int main()
{
    int arr[10]={3,3,3,2,2,8,9,18,4,4};
    int n=10;
    mergeSort(arr,0,n-1);
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}