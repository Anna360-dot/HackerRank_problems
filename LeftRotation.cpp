#include <iostream>
#include <vector>

std::vector<int> rotLeft(std::vector<int> a, int d) {
    std::vector<int> final_arr;

    for(int i = d; i < a.size(); i++) {
        final_arr.push_back(a[i]);
    } 

    for(int i = 0; i < d; i++) {
        final_arr.push_back(a[i]);
    }

    return final_arr;
}