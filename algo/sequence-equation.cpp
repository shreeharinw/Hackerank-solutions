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
    int n,i,flag=0,k,j;
    cin>>n;
    int a[n];
    for(i=1;i<=n;i++)
    {
        cin>>a[i];        
    }
    for(i=1;i<=n;i++)
    {
        flag=0;
        for(j=1;j<=n,flag==0;j++)
        {
            if(a[j]==i)
                flag=1;
        }
        j--;
        flag=0;
        for(k=1;k<=n,flag==0;k++)
        {
            if(a[k]==j)
                flag=1;
        }
        k=k-1;
        cout<<k<<endl;
    }
    
    return 0;
}
