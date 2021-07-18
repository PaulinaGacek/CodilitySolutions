// Training 5 - July 2021
// First Unique
// Scored for 100%

#include <iostream>
#include <map>
#include <vector>

int solution(std::vector<int> &A) {
    std::map<int,int> occurrence;
    for(size_t i = 0; i < A.size(); ++i){
        occurrence[A[i]]++;
    }
    for(const auto &i: A){
        if(occurrence[i]==1)
            return i;
    }
    return -1;
}
