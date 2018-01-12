#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int main(){
    char time[10],str[4];
    cin >> time;
    str[0]=time[8];
    str[1]=time[9];
    str[2]='\0';
    if((strcmp("PM",str))==0)
    {
        if(time[1]!='2')
        {
        time[0]+=1;
        time[1]+=2;
        }
        else if(time[1]=='2' && time[0]=='0')
        {
        time[0]+=1;
        time[1]+=2;
        }
    }    
        else
        {
             if(time[1]=='2')
             {
            time[0]-=1;
            time[1]-=2;
             }
        }
    time[8]='\0';
    cout<<time;
    return 0;
}
