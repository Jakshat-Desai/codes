#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
int a;
long long int b;
for(;t>0;t--)
{
cin>>a>>b;
int k=a%10;
if(b==0 && k!=0)
{
    cout<<1<<"\n";
}
else if(k==0 || k==1 || k==5 || k==6)
{
cout<<k<<"\n";
}
else if(k==2 || k==3 || k==7 || k==8)
{
    if(b%4==1)
        cout<<k<<"\n";
    else if(b%4==2)
        cout<<(k*k)%10<<"\n";
    else if(b%4==3)
        cout<<(k*k*k)%10<<"\n";
    else
        cout<<(k*k*k*k)%10<<"\n";
}
else
{
    if(b%2==1)
        cout<<k<<"\n";
    else
        cout<<(k*k)%10<<"\n";
}
}
}
