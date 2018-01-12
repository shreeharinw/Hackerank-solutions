#include <bits/stdc++.h>

using namespace std;
int n,m,s;
int getMoneySpent(vector < int > k, vector < int > v, int s){
    // Complete this function
    int i,j,temp,flag;
    for(i=0;i<n-1;i++)
	{
		flag=0;
		for(j=0;j<n-i-1;j++)
		{
			if(k[j]>k[j+1])
			{
				temp=k[j];
				k[j]=k[j+1];
				k[j+1]=temp;
				flag=1;
			}	
		}
		if(flag==0)
		{
			break;	
		}
	}	
    
    for(i=0;i<m-1;i++)
	{
		flag=0;
		for(j=0;j<m-i-1;j++)
		{
			if(v[j]>v[j+1])
			{
				temp=v[j];
				v[j]=v[j+1];
				v[j+1]=temp;
				flag=1;
			}	
		}
		if(flag==0)
		{
			break;	
		}
	}	
    int tsum=0,lsum=0;
    tsum=k[0]+v[0];
    flag=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            lsum=k[i]+v[j];
            if(lsum<=s)
            {
                if(lsum>tsum)
                    tsum=lsum;
                flag=1;
            }
        }
    }       
    if(flag==0)
        return -1;
    return tsum;
}

int main() {
    //int s;
    //int n;
    //int m;
    cin >> s >> n >> m;
    vector<int> keyboards(n);
    for(int keyboards_i = 0; keyboards_i < n; keyboards_i++){
       cin >> keyboards[keyboards_i];
    }
    vector<int> drives(m);
    for(int drives_i = 0; drives_i < m; drives_i++){
       cin >> drives[drives_i];
    }
    //  The maximum amount of money she can spend on a keyboard and USB drive, or -1 if she can't purchase both items
    int moneySpent = getMoneySpent(keyboards, drives, s);
    cout << moneySpent << endl;
    return 0;
}
