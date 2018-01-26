#include<bits/stdc++.h>
using namespace std;
int val(char c)
{
  if(c=='{')
    return 1;
  return -1;
}
int main()
{
  int i=1;
  string s;
  do
  {
    int sum=0;
    int count_=0;
    cin>>s;
    if(s[0]=='-')
      return 0;
     for(int i=0;i<s.length();i++)
     {
      sum+=val(s[i]);
      if(sum<0)
      {
        sum+=2;
        count_++;
      }
     }
     count_+=sum/2;
     cout<<i++<<". "<<count_<<"\n";
  }while(1);
}
