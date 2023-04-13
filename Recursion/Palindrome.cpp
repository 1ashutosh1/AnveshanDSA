#include<iostream>
using namespace std;
 bool checkPalindrome(string str, int s, int e)
{
    //base case
    if(s>e)
    return 1;

    if(str[s]!=str[e])
    return 0;
    else
    checkPalindrome(str,s+1,e-1);
}
int main()
{
    string str;
    cin>>str;
    bool ans=checkPalindrome(str,0,str.length()-1);
    if(ans)
    cout<<"Palindrome";
    else
    cout<<"Not palindrome";
}