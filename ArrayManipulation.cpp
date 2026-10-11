#include <iostream>
#include <vector>

long arrayManipulation(int n, std::vector<std::vector<int>> queries) {
    std::vector<long> arr(n + 2, 0);

    for(int i = 0; i < queries.size(); i++){
    int a = queries[i][0];
    int b = queries[i][1];
    int k = queries[i][2];

    arr[a - 1] += k;
    arr[b] -= k;
    }

    long max_value = 0;
    long curr_sum = 0;

    for(int i = 0; i < n; i++) {
        curr_sum += arr[i];
        if(curr_sum > max_value){
            max_value = curr_sum;
        }
    }
    return max_value;
}