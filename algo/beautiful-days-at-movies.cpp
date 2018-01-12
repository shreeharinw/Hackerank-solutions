#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int i,j,k,m,count=0,x,y,num,z,w;
    cin>>i>>j>>k;
    for(m=i;m<=j;m++)
    {
        x=m;
        y=x;
        num=0;
        while(y!=0)
        {
            z=y%10;
            y=y/10;
            num=num*10+z;
        }
        //cout<<num<<" "; 
        w=(abs(x-num))%k;
        if(w==0)
            count++;
    }
    cout<<count;
    return 0;
}
