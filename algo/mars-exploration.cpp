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
    string s;
    cin >> s;
    int i,count=0,x,y,z;
    for(i=0;i<s.length();)
    {
        x=s[i];
        y=s[i+1];
        z=s[i+2];
        if(x!='S')
            count++;
        if(y!='O')
            count++;
        if(z!='S')
            count++;
        i+=3;
    } 
    cout<<count;
    return 0;
}
