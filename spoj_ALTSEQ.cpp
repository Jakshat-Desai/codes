#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n; int arr[n]; for(int k=0;k<n;k++)cin>>arr[k];
    vector<int> score(n,1);
    pair<int,int> j; int i=0;j={0,0};
    if(arr[0]>0)j.second=-1;
    else j.second=1;
    while(i<n)
    {
        if(j.first<i){
            if((abs(arr[j.first])<abs(arr[i])) && !(j.second<0 ^ arr[j.first]<0))
                score[i]=max(score[j.first]+1,score[i]);
            j.first=j.first+1;}
            else if(i==j.first){
            i++; j.first=0;
            if(i>=n)break;
            else{
                if(arr[i]>0)j.second=-1;
                else j.second=1;} }
    }
    int maxim=0; for(int i=0;i<n;i++)maxim=max(maxim,score[i]);
    cout<<maxim;
}
/*
Logic:
modified version of longest common subsequence problem
*/
