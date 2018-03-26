#include<bits/stdc++.h>
using namespace std;
long long int count_(string a,vector<long long int> cnt)
{
    int n=a.length();
    cnt[0]=1;
    for(int i=1;i<n;i++)
    {
        int twodigit=10*(a[i-1]-'0')+(a[i]-'0');
        if(a[i]!='0')//case where a[i] is added to string from a[0] to a[i-1] such that a[i] is considered as a single character
            cnt[i]=cnt[i-1];
        if(twodigit>9 && twodigit<27)//case where a[i-1] and a[i] are grouped as a single character
            {
                if(i==1)
                    cnt[i]=cnt[i]+1;
                else
                    cnt[i]=cnt[i]+cnt[i-2];
            }
    }
    return cnt[n-1];
}
int main()
{
    string s;
    while(1)
    {
        cin>>s;
        vector<long long int> cnt(s.length());//stores at ith index, the number of strings formed by the characters from s[0] to s[i]
        if(s=="0")
            return 0;
        cout<<count_(s,cnt)<<"\n";
    }
}
