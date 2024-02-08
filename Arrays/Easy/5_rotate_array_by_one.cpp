#include <bits/stdc++.h> 
vector<int> rotateArray(vector<int>& arr, int n) {
    int temp = arr[0];
    arr.erase(arr.begin());
    arr.push_back(temp);
    return arr;
}
