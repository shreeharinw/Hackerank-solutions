#include <bits/stdc++.h>

using namespace std;

int main() {
    int a[5],arr_i;
    for(arr_i = 0; arr_i < 5; arr_i++){
       cin >> a[arr_i];
    }
    int flag=0,temp,i,j;
    for(i=0;i<4;i++)
    {
        flag=0;
        for(j=0;j<4-i;j++)
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
    long int min_sum=0,max_sum=0;
    //int i;
    for(i=0;i<4;i++)
        min_sum+=a[i];
    for(i=1;i<5;i++)
        max_sum+=a[i];
    cout<<min_sum<<" "<<max_sum;
        return 0;
}
