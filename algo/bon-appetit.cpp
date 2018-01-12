#include <bits/stdc++.h>

using namespace std;

void bonAppetit(int n, int k, int b, vector <int> ar) {
    // Complete this function 
    int i,sum=0,z;
    for(i=0;i<n;i++)
    {
        if(i!=k)
            sum+=ar[i];
    }
    sum/=2;
    z=b-sum;
    if(z==0)
        cout<<"Bon Appetit";
    else
        cout<<z;
}

int main() {
    int n;
    int k;
    cin >> n >> k;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int b;
    cin >> b;
    //int result = 
        bonAppetit(n, k, b, ar);
    //cout << result << endl;
    return 0;
}
