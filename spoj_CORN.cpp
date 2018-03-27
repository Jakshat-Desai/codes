#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; string str;
    cin>>t;
    for(;t>0;t--)
    {
        cin>>str;
        double r=0,s=0,h=0,count_=0;
        for(int i=0;i<str.length();)
        {
            double k=1,x=10;
            count_++;
            for(;i<str.length();i++)
            {
                if(str[i]=='e')break;
                if(str[i]=='.'){x=1;k=10.0;continue;}
                if(count_==1)
                    r=x*r+float(str[i]-'0')/k;
                else if(count_==2)
                    s=x*s+float(str[i]-'0')/k;
                else
                    h=x*h+float(str[i]-'0')/k;
                if(k>1)k*=10;
            }
            i++;
        }
        cout<<ceil(s*3.1415*r*sqrt(r*r+h*h))<<"\n";
    }
}
