#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    for(;t>0;t--)
    {
        int n;cin>>n;int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        vector<int> dis1(n,1);
        vector<int> dis2(n,1);
        for(int i=0;i<n;i++)
            for(int j=0;j<i;j++)
                if(arr[j]<arr[i])
                    dis1[i]=max(dis1[i],dis1[j]+1);
        for(int i=n-1;i>=0;i--)
            for(int j=n-1;j>i;j--)
                if(arr[j]<arr[i])
                    dis2[i]=max(dis2[i],dis2[j]+1);
        int maxim=0;
        for(int i=0;i<n;i++)maxim=max(maxim,dis1[i]+dis2[i]);
        cout<<maxim-1<<"\n";
    }
}
/*
Logic: When the longest sequence which first increases and then decreases is to be found:
1)first find increasing sequence(i.e find an array which contains at index i, the max length of subsequence obtained, if taken 
from 0 to ith elemment)
2)then find decreasing sequence(i.e find an array which contains at index i, the max length of subsequence obtained, if taken 
from ith element to nth elemment)
3)Take the sum of the two arrays. The element with maximum value contains the maximum length of required subsequence.
Reason: the sum at ith element would indicate sum of lengths of increasing subsequence till ith element and the decreasing subsequence from
ith element till nth element
*/
