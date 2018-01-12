#include <bits/stdc++.h>

using namespace std;

int solve(int n, vector < int > s, int d, int m){
    // Complete this function
    int i,j,sum=0,count=0,total_count=0;
    for(i=0;i<n;i++)
    {
        count=0;
        sum=0;
        for(j=i;j<n,count<m;j++)
        {
            sum+=s[j];
            count++;
        }
        if(sum==d)
            total_count++;
    }
    return total_count;
}

int main() {
    int n;
    cin >> n;
    vector<int> s(n);
    for(int s_i = 0; s_i < n; s_i++){
       cin >> s[s_i];
    }
    int d;
    int m;
    cin >> d >> m;
    int result = solve(n, s, d, m);
    cout << result << endl;
    return 0;
}
