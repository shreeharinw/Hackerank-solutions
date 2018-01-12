#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;    
void sm(int arr[]);
int cut(int arr[]);
//void count(); 
int n,small;
int arr[1000];
int main(){
    
    cin >> n;
    int count=0;
    for(int arr_i = 0;arr_i < n;arr_i++)
    {
        cin >> arr[arr_i]; 
        count++;  
    }
    do
    {
        cout<<count<<endl;
        sm(arr);
        count=cut(arr);

    }while(count>0);
    
    return 0;
}
void sm(int arr[])
{
      
    small=arr[0];
    for(int arr_i = 0;arr_i < n;arr_i++)
    {
        if(arr[arr_i]<small && arr[arr_i]>0 && small!=0)
            small=arr[arr_i];         
        else if(small==0 && arr[arr_i]>0)
            small=arr[arr_i];         
    }
}    
int cut(int arr[])
{
    int count=0;
    for(int arr_i = 0;arr_i < n;arr_i++)
    {               
        if(arr[arr_i]>0)
        {
            arr[arr_i]=arr[arr_i]-small; 
            //count++;
        }    
    } 
    for(int arr_i = 0;arr_i < n;arr_i++)
    {               
        if(arr[arr_i]>0)
        {
            //arr[arr_i]=arr[arr_i]-small; 
            count++;
        }    
    } 
    return count;    
}    
