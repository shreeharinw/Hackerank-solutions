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
    float x1;
    float v1;
    float x2;
    float v2,a;
    cin >> x1 >> v1 >> x2 >> v2;
    float n,b,c=0.000000;
    n=(x1-x2)/(v2-v1);
    a=(int) n;
    b=n-a;
    if(b==c && n>=0)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
