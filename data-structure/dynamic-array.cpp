#include <bits/stdc++.h>
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int seq,q;
    cin>>seq>>q;
    vector<vector<long long>> v(seq);
    long long last_ans=0,x,y,flag,seq_no=0;
    for(int i=0;i<q;i++){
        cin>>flag>>x>>y;
        seq_no = (x^last_ans)%seq;
        if(flag==1){
            v[seq_no].push_back(y);
        }
        if (flag == 2){
            int val = v[seq_no].size(); 
            last_ans = v[seq_no][y%val];
            cout << last_ans <<endl;
        }
    }
    return 0;
}