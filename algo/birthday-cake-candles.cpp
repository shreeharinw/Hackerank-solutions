#include <bits/stdc++.h>

using namespace std;

int birthdayCakeCandles(int n, vector <int> ar) {
    // Complete this function
    int i,max=0,count=0;
    for(i=1;i<n;i++)        
    {
        if(ar[i]>ar[max])
            max=i;
    }
    int max_value=ar[max];
    for(i=0;i<n;i++)        
    {
        if(ar[i]==max_value)
            count++;
    }
    return count;    
}


int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = birthdayCakeCandles(n, ar);
    cout << result << endl;
    return 0;
}
