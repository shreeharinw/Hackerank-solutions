#include <bits/stdc++.h>

using namespace std;

int main(){
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s;
        cin >> s;
        string h="hackerrank";
        int j=0,i;
        for(i=0;i<s.length();i++)
        {
            if(s[i]==h[j])
            {
                j++;
            }
            if(j==9)
                break;
        }
        if(j==9)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        // your code goes here
    }
    return 0;
}
