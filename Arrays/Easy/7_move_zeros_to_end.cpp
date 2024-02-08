vector<int> moveZeros(int n, vector<int> a) {
    vector<int> res;
    for(auto &i : a)
    if(i!= 0) res.push_back(i);
    
    while(res.size()!= a.size())
    res.push_back(0);
    
    return res;
}
