#include <bits/stdc++.h>

using namespace std;
//int n;


int main() {
    int n;
    cin >> n;
    int a[n];
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> a[ar_i];
    }     
     int i,j,flag,temp,count=0;
    for(i=0;i<n;i++)
    {
        flag=0;
        for(j=0;j<n-i-1;j++)
        {
            if(a[j+1]<a[j])
            {
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
                flag=1;
            }
        }
        if(flag==0)
            break;
    }
    //for(int ar_i = 0; ar_i < n; ar_i++){
      // cout << a[ar_i]<<" ";
    //}
    for(i=0;i<n-1;i++)
    {
        if(a[i]==a[i+1])
        {
            count++;
            i++;    
        }
    }
    cout << count << endl;
    return 0;
}
