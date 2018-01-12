#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n,pos=0,zer=0,neg=0;
    cin >> n;
    vector<int> arr(n);
    float zero=0.0,positive=0.0,negative=0.0;
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
        if(arr[arr_i]>0)
            pos++;
        else if(arr[arr_i]<0)
            neg++;
        else
            zer++;
    }
    zero=zer/(float(n));
    positive=pos/(float(n));
    negative=neg/(float(n));
    cout<<positive<<endl;
    cout<<negative<<endl;
    cout<<zero;
    return 0;
}
