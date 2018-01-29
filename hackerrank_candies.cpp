/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int val[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        val[i]=1;
    }
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]<arr[i+1])
        {
            val[i+1]=val[i]+1;
        }
    }
    for(int i=n-1;i>0;i--)
    {
        if(arr[i]<arr[i-1])
        {
            if(val[i]+1>val[i-1])
            {
                val[i-1]=val[i]+1;
            }
        }
    }
    long long int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=val[i];
    }
    cout<<sum;
}
