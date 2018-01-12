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
        int n,len=1;
        cin >> n;
        for(int i=1;i<=n;i++)
        {
            if(i%2==1)
                len*=2;
            else
                len+=1;
        
        }
        cout<<len<<endl;
        
    }
    return 0;
}
