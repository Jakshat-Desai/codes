#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    long long int a,b,n;
    double s;
    for(;t>0;t--)
    {
        cin>>a>>b>>s;
        n=(int)((2*s)/(a+b));
        long long int d=(b-a)/(n-5);
        long long int fst=a-(2*d);
        long long int i=0;
        cout<<n<<"\n";
        for(;i<n;i++)
        {
            cout<<fst+(i*d)<<" ";
        }
    }
}
