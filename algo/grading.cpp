#include <bits/stdc++.h>

using namespace std;

vector < int > solve(vector < int > grade,int n){
    // Complete this function
    
    int i,quotient,value;
    vector<int> new_grade(n);
    for(i = 0; i < n; i++){
       if(grade[i]<=37)
           new_grade[i]=grade[i];
        else
        {
            quotient=grade[i]/5;
            value = ((quotient+1)*5)-grade[i];
            if(value==1 || value==2)
            {
                new_grade[i]= ((quotient+1)*5);               
            }
            else
            {
                new_grade[i]=grade[i];
            }
        }
    }
    return new_grade;
}

int main() {
    int n;
    cin >> n;
    vector<int> grades(n);
    for(int grades_i = 0; grades_i < n; grades_i++){
       cin >> grades[grades_i];
    }
    vector < int > result = solve(grades,n);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? "\n" : "");
    }
    cout << endl;
    

    return 0;
}
