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
    int n;
    int k;
    cin >> n >> k;
    vector<int> a(n);
    for(int c_i = 0;c_i < n;c_i++){
       cin >> a[c_i];
    }
    int z=0,e=100;
    while(1)
    {
        z=(z+k)%n;        
        if(a[z]==1)
            e=e-2;
        e=e-1;
        if(z==0)
            break;
    }
    cout<<e;
    return 0;
}
