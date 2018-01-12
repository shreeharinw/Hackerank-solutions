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
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char s[1000];
    std::cin.getline(s,1000,'#');
    int a[26],i,n,x,flag,j;
    for(i=0;i<26;i++)
    {
        a[i]=0;
    }
    n=strlen(s);
    for(i=0;i<n;i++)
    {
        if(isalpha(s[i]))
        {
            x=toupper(s[i]);
            a[x-65]=1;
        }
    }
    flag=0;
    for(j=0;j<26;j++)
    {
        if(a[j]!=1)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
        cout<<"pangram";
    else
        cout<<"not pangram";
    return 0;
}
