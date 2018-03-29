#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;long long int sum=0;
    for(int i=1;i<=sqrt(n);i++)
    {
        for(int j=i*i;j<=n;j+=i)
        {
            sum++;
        }
    }
    cout<<sum;
}
