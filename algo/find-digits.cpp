#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long long int n,n1;
        cin >> n;
        n1=n;
        int count=0,temp;
        while(n1!=0)
        {
        temp=n1%10;
        if(temp!=0)
        {
            if(n%temp==0)    
            count++;
        }            
            
         n1/=10;   
        }
        cout<<count<<endl;
    }
    return 0;
}
