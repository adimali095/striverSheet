vector < int > sortedArray(vector < int > a, vector < int > b) {
    vector<int> res;
    int aI =0 ,bI=0;
    while(aI < a.size() && bI < b.size()){
        while(aI <a.size() -1 && a[aI] == a[aI+1])
        aI++;
        
        while(bI < b.size() -1 && b[bI] == b[bI+1])
        bI++;   

        if(a[aI] > b[bI]){
            res.push_back(b[bI]);
            bI++;
        }
        else if(a[aI] < b[bI]){
            res.push_back(a[aI]);
            aI++;
        }
        else{
            res.push_back(a[aI]);
            aI++;
            bI++;
        }
    }
    while(aI < a.size()){
        res.push_back(a[aI]);
        aI++;
    }
    while(bI < b.size()){
        res.push_back(b[bI]);
        bI++;
    }
    return res;
}
