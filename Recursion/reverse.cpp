#include<iostream>
using namespace std;
void reverse(string &name, int s, int e)
{
    cout<<"Call received for "<<name<<endl;
    //base case
    if(s>e)
    return;

    swap(name[s],name[e]);
    s++;
    e--;
    reverse(name,s,e);
}
int main()
{
    string str;
    cin>>str;
    reverse(str,0,str.length()-1);
    cout<<str;
}