#include <bits/stdc++.h>

using namespace std;

string solve(int y){
    // Complete this function
    string str;
    if (y==1918) {
        str="26.09.1918";
        return str;
    }
    if (y % 4 == 0 && y<=1917)  {
        str="12.09."+to_string(y);
        return str;
    }
    if (y>=1919 && (((y % 400 == 0) || ((y % 4 == 0) && !(y % 100 == 0))))) {
       str="12.09."+to_string(y);
        return str;
    }
    str="13.09."+to_string(y);
    return str;
}

int main() {
    int year;
    cin >> year;
    string result = solve(year);
    cout << result << endl;
    return 0;
}
