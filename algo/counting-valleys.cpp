#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long int n,count=0,valley=0,flag=0,i;
    cin>>n;
    char s[n+1];
    cin>>s;
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]=='U')
            count++;
        if(s[i]=='D')
            count--;
        if(count<0 && flag==0)
        {
            valley++;
            flag=1;
        }
        if(count==0 && flag==1)
            flag=0;
    }    
    cout<<valley;
    return 0;
}
