#include "vectorFunctions.hpp"
std::vector<std::shared_ptr<int>> generate(int count){
    std::vector<std::shared_ptr<int>> vec;
    for(size_t i=0;i<count;i++){
        vec.push_back(std::make_shared<int>(i));
    }
return vec;
}
void print(std::vector<std::shared_ptr<int>>& vec){
    for(auto& el: vec){
        std::cout<<*el<<",";
    }
}
void add10(std::vector<std::shared_ptr<int>>& vec){

 for(auto& el: vec){
     if(el!=nullptr)
            *el+=10;
    }

    
}
void sub10(int *const number){
     if(number!=nullptr)
            *number-=10;
}

void sub10(std::vector<std::shared_ptr<int>>& vec){
    for(auto& element:vec){
    sub10(element.get());
    }
}
