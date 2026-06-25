#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int nums[7] = {4,2,1,1,1,3,5};
    int j = 0;
    int i = 0;
    int n = 7;
    int sum = 5;
    int ans = 0;
    int res = 0;
    while(j < n){
        ans = ans + nums[j];
        if(ans < sum){
            j++;
        }
        else if(sum == ans){
            res = max(i-1+i,res);
            i++;
            ans = ans-nums[i];
        }
    }
    cout<<ans<<" ";
}