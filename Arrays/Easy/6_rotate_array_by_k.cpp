vector<int> rotateArray(vector<int>arr, int k) {
    int temp;
    for(int i = 0;i<k;i++){
        temp = arr[0];
        arr.erase(arr.begin());
        arr.push_back(temp);
    }
    return arr;
}
