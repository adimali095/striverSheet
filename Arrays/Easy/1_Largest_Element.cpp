#include <bits/stdc++.h> 
int largestElement(vector<int> &arr, int n) {
    int maxi = INT_MIN;
    for(auto &i : arr){
        maxi = max(maxi,i);
    }
    return maxi;
}
