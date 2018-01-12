#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n,count=0,k;
    cin >> n;
    vector<int> c(n);
    for(int c_i = 0;c_i < n;c_i++){
       cin >> c[c_i];
    }
    for(int c_i = 0;c_i < n;){
        k=c_i+2;  
        if(c_i==n-1)
            break;
        if(c[k]!=1)
        {
            c_i+=2;
        }          
        else
        {
            c_i+=1;
        }
        count++;            
    }
    cout<<count;
    return 0;
}
