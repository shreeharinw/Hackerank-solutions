#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    int a[5]={0,0,0,0,0};
    scanf("%d",&n);
    int high,id=0;
    int *types = malloc(sizeof(int) * n);
    for(int types_i = 0; types_i < n; types_i++){
       scanf("%d",&types[types_i]);
       a[types[types_i]-1]++;
    }
    // your code goes here
    high=a[0];
    for(int i = 0; i < 5; i++){
       if(a[i]>high)
       {
           high=a[i];
           id=i;
       }
    }
    printf("%d",id+1);
    return 0;
}