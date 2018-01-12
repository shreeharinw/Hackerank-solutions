#include <bits/stdc++.h>

using namespace std;
int n;
void getRecord(vector < int > s){
    // Complete this function
    int min_val,max_val,min_count=0,max_count=0,i;
    min_val=s[0];
    max_val=s[0];
    for(i=0;i<n;i++)
    {
        if(s[i]<min_val || s[i]>max_val)
        {
            if(s[i]<min_val)
            {
                min_count++;
                min_val=s[i];
            }    
            if(s[i]>max_val)
            {
                max_count++;
                max_val=s[i];
            }
                
        }
    }
    //min_count--;
    //max_count--;
    cout<<max_count<<" "<<min_count;
}

int main() {
    //int n;
    cin >> n;
    vector<int> s(n);
    for(int s_i = 0; s_i < n; s_i++){
       cin >> s[s_i];
    }
    getRecord(s);    
    return 0;
}
