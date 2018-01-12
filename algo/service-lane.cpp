#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    int t;
    cin >> n >> t;
    vector<int> width(n);
    for(int width_i = 0;width_i < n;width_i++){
       cin >> width[width_i];
    }
    for(int a0 = 0; a0 < t; a0++){
        int i;
        int j,small;
        cin >> i >> j;
        small=width[i];
        for(int width_i = i;width_i <=j;width_i++)
        {
            if(width[width_i]<small)
            {
                small=width[width_i];
            }                
        }    
        cout<<small<<endl;
    }
        
    return 0;
}
