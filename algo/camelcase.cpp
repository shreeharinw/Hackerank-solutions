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
    int i,count=0;
    for(i=0;s[i]!='\0';i++)
    {
        if(isupper(s[i]))
        {
            //count++;            
            break;        
        }   
    }
    count=1;
    for(i=0;s[i]!='\0';i++)
    {
        if(isupper(s[i]))
        {
            count++;                        
        }   
    }
    cout<<count;
    return 0;
}
