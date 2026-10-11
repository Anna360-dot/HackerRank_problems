#include <iostream>
#include <vector>

void minimumBribes(std::vector<int> q) {
    int quantity = 0;

    for(int i = 0; i < q.size(); i ++) {
        if(((q[i]-1) - i) > 2) {
            std::cout<<"Too chaotic" <<'\n';
            return;
        }

        for(int j = std::max(0,q[i] - 2); j < i; j++){
            if(q[j] > q[i]) {
                quantity++;
            }
        }
    }
    std::cout << quantity << '\n';
}