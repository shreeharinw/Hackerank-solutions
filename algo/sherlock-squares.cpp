include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long long int a,b,j,ch=0;
        cin>>a>>b;
        for(j=sqrt(a);j<=sqrt(b);j++)
        {
            if((j*j)>=a && (j*j)<=b)
                ch++;
        }            
        cout<<ch<<endl;
    }            
    return 0;
}
