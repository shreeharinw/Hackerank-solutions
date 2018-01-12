#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
                 int n,k,q,m,j;
                 cin>>n>>k>>q;
                 k%=n;                      
                  int A[n];                          // initializing an array A of size n
for(int i=0;i<n;i++) cin>>A[i];                         //filling the array

for(int i=0;i<q;i++){
        cin>>m;                                  // taking the index
        j=m-k;
        if(j<0) cout<<A[n+j]<<endl;         // the case when k>m. The output is A[n+j] which is nothing but A[n+m-k].
        else cout<<A[j]<<endl;                    // the case when k<m. The output is A[j] which is nothing but A[m-k].
}
return 0;
};
