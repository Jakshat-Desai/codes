#include<bits/stdc++.h>
using namespace std;
//s stores the string
string s;
//argument ind stores the index of digit under consideration
//ind is like an iterator that goes from one character to other in string s from left to right
//argument pre stores the sum of digits of the group just before ind
int ans(int ind, int pre)
{
    //initializing variables. Variable sum stores the sum of digits of the current group
    int val=0,sum=0;
    //if the ind has exceeded the length of string the we have obtained one grouping. Thus we return 1.
    if(ind==s.length())
        return 1;
    //forming groups starting from element at index ind
    for(int i=ind;i<s.length();i++)
    {//adding more elements from right to the group beginning with index ind and ending with index i.
        sum+=s[i]-'0';
        //if the sum of elements in the current group is more than sum of elements to the left of element with index ind
        //then the string is so far valid and we can jump to the
        //next element(considering that the groupings of elements to the left remain unchanged)
        //to check its grouping. The number of valid groupings thus obtained are added to the answer
        if(sum>=pre) val+=ans(i+1,sum);
    }
    //returning the answer
    return val;
}
int main()
{
    int i=1;
    while(1)
    {
        cin>>s;
        if(s=="bye")return 0;
        cout<<i++<<". "<<ans(0,0)<<"\n";
    }
}
//the groupings are constructed from left to right in the string
