#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int k,i;
    cin >> k;
    k=k%26;
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]>=65 && s[i]<=90)
        {
            if(s[i]>90-k)
                s[i]=s[i]+k-26;
            else
                s[i]+=k;
        }
        if(s[i]>=97 && s[i]<=122)
        {
            if(s[i]>122-k)
                s[i]=s[i]+k-26;
            else
                s[i]+=k;
        }
    }
    cout<<s;
    return 0;
}
