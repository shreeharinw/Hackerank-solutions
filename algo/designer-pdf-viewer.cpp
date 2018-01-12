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
    vector<int> h(26);
    for(int h_i = 0; h_i < 26; h_i++){
       cin >> h[h_i];
    }
    string word;
    cin >> word;
    int x,y,z,i,area;
    x=97;
    y=word.length();
    vector<int> a(y);
    for(i=0;i<y;i++)
    {
        a[i]=h[word[i]-x];
        //cout<<a[i]<<" ";
    }
    //cout<<endl;
    std::sort(a.begin(),a.end());
    z=a[y-1];
    area=y*z;    
    cout<<area;//<<" "<<y<<" "<<z;
    return 0;
}
