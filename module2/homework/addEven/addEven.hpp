#pragma once
#include <vector>

int addEven(const std::vector<int>& numbers) {
    long int result=0;
    for(auto&el :numbers)
        if(!(el&1))
            result+=el;
    
    // TODO: Your implementation goes here
    // Below return is only to make this function compile now
    return result;
}
