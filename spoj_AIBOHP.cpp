#include<bits/stdc++.h>
using namespace std;
int LCS(string s1)
{
    int arr[s1.length()+1][s1.length()+1];
    for(int i=0;i<=s1.length();i++){ arr[i][0]=0; arr[0][i]=0;}
    for(int i=1;i<=s1.length();i++)
        for(int j=1;j<=s1.length();j++)
        {
            if(s1[i-1]==s1[s1.length()-j]) arr[i][j]=arr[i-1][j-1]+1;
            else arr[i][j]=max(arr[i-1][j],arr[i][j-1]);
        }
    return (s1.length()-arr[s1.length()][s1.length()]);
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t; cin>>t;
    for(;t>0;t--)
    {
        string s; cin>>s;
        cout<<LCS(s)<<"\n";
    }
}
