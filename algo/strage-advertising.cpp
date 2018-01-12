#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    int result = 2,like = 2;
    for(int i = 2; i <= n; i++){
        like*=3;
        like = like/2;
        result+=like;
    }
    cout << result << endl;
    return 0;
}