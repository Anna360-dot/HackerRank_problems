int sockMerchant(int n, vector<int> ar) {
    
    sort(ar.begin(),ar.end());
    
    int pairsCount = 0;
    int current_count = 1;
    
    for(int i = 0; i < n; i++){
       if(i == n - 1 || ar[i] != ar[i+1]){
        pairsCount += current_count/2;
        current_count = 1;
       } else {
        current_count++;
       }
    }
    return pairsCount; 
}