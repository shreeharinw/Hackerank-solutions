#include <bits/stdc++.h>

using namespace std;

int solve(int n, int p){
    // Complete this function
    int m,i,count=0;
    m=n/2;
    if(p<=m)
    {
        if(p%2==0)
            p++;
        for(i=1;i<p;i=i+2)
        {
            count++;
        }
    }
    else
    {
        if(n%2==1)
            n--;
        for(i=n;i>p;i=i-2)
        {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    int p;
    cin >> p;
    int result = solve(n, p);
    cout << result << endl;
    return 0;
}
