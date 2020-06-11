#pragma once
#include <vector>
#include <limits>

int maxOfVector(const std::vector<int>& vec) {
    int max=INT32_MIN;
   for(auto&el :vec)
        if(el>max) max=el;
    return max;
}
