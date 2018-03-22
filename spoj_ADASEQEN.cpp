#include<bits/stdc++.h>
using namespace std;
int main()
{
    int len1, len2; cin>>len1>>len2;
    int alpha[26]; for(int i=0;i<26;i++) cin>>alpha[i];
    int arr[len1+1][len2+1];
    for(int i=0;i<=len1;i++)arr[i][0]=0;
    for(int i=0;i<=len2;i++)arr[0][i]=0;
    string s1,s2; cin>>s1>>s2;
    for(int i=1;i<=len1;i++)
        for(int j=1;j<=len2;j++){
            if(s1[i-1]==s2[j-1])arr[i][j]=arr[i-1][j-1]+alpha[s1[i-1]-'a'];
            else arr[i][j]=max(arr[i-1][j],arr[i][j-1]);}
    cout<<arr[len1][len2];
}
/*
Logic: Longest Common substring code. However, instead of incrementing the length by 1 each time, we increment it 
by the score associated with each letter
*/
