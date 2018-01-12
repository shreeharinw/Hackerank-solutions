#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,k,count=0;
    cin>>n;
    string s1[n];
    for(int i=0;i<n;i++)
    {
        cin>>s1[i];
    }
    cin>>k;
    string s2[k];
    for(int i=0;i<k;i++)
    {
        cin>>s2[i];
    }
    for(int i=0;i<k;i++)
    {
        count=0;
        for(int j=0;j<n;j++)
        {
            if(s1[j]==s2[i])
                count++;
        }
        cout<<count<<endl;
    }
    return 0;
}
