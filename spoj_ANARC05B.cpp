#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1,n2;
    while(1)
    {
        cin>>n1;
        if(!n1)return 0;
        int arr1[n1]; for(int i=0;i<n1;i++)cin>>arr1[i];
        cin>>n2; int arr2[n2]; for(int i=0;i<n2;i++)cin>>arr2[i];
        int i=0,j=0; long long int sum1=0,sum2=0,sum=0;
        while(1)
        {
           if(i>=n1 && j>=n2) break;
            if(arr1[i]==arr2[j])
            {
                sum+=arr1[i]+max(sum1,sum2);
                i++; j++; sum1=0; sum2=0;
            }
            else if(arr1[i]>arr2[j])
            {
                if(j<n2) sum2+=arr2[j++];
                else
                {
                if(i<n1) sum1+=arr1[i++];
                else break;
                }
            }
            else
            {
                if(i<n1) sum1+=arr1[i++];
                else
                {
                    if(j<n2) sum2+=arr2[j++];
                    else break;
                }
            }
        }
        sum+=max(sum1,sum2); cout<<sum<<"\n";
    }
}
