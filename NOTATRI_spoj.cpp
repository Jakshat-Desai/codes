#include<bits/stdc++.h>
using namespace std;
int bin(int arr[], int start, int end, int x, int n)
{
    if(end-start<=1)
    {
        if(arr[start]>x)
        return start;
        else if(arr[end]>x)
        return end;
        else
        return n;
    }
    int mid=(start+end)/2;
    if(arr[mid]>x)
    {
        return bin(arr,start,mid,x,n);
    }
    else
    {
        return bin(arr,mid,end,x,n);
    }
}
int main()
{
    while(true)
    {
        int n;
        cin>>n;
        if(n==0)
            break;
        int arr[n];
        int i,j;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int sum=0;
        for(i=0;i<n-1;i++)
        {
            for(j=1+i;j<n;j++)
            {
                int x=arr[i]+arr[j];
                sum+=n-bin(arr,j+1,n-1,x,n);
            }
        }
        cout<<sum<<"\n";
    }
}
