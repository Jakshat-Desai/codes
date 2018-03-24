#include<bits/stdc++.h>
using namespace std;
double func(int r, int h, double k)
{
    double l=sqrt(r*r+h*h);
    return r*h*(k*k*k)+3*l*k*k-6*l;
}
double binsearch(double strt, double up, int r, int h, double prev)
{
    double mid=(up+strt)/2.0;
    if(h*abs(mid-prev)<0.000001)return mid;
    if(func(r,h,mid)>0)
        return binsearch(strt,mid,r,h,mid);
    else if(func(r,h,mid)==0)
        return mid;
    else
        return binsearch(mid,up,r,h,mid);
}
int main()
{
    int t; cin>>t;
    for(;t>0;t--)
    {
        int r,h; cin>>r>>h;
        if(func(r,h,1)<0)
        printf("%0.6f\n",h*1.0);
        else
        printf("%0.6f\n",h*binsearch(0,1,r,h,0));
    }
}

//k=(radius of paint filled area)/(radius of cone)
