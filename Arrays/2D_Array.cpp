#include <iostream>
#include <vector>

int hourglassSum(std::vector<std::vector<int>> arr) {
    int max_sum = INT_MIN;

    for(int i = 0; i <= 3; i++) {
        for(int j = 0; j <= 3; j++) {
            int sum_val = arr[i][j] + arr[i][j+1] + arr[i][j+2] + arr[i+1][j+1]+ 
                          arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2];

    max_sum = std::max(max_sum, sum_val); 
      } 
    } 
    return max_sum;
}

