/// Lesson 2 - Arrays - OddOccurrencesInArray
// Scored for 88% - last performance test failed
// Time complexity - O(nlogn)

#include <iostream>
#include <vector>
#include <map>

int solution(std::vector<int> &A) {
    std::map<int,size_t> occurrence;
    for(const auto & i : A) // O(nlogn)
        occurrence[i]++;
    
    for(const auto &i : occurrence){ // O(n)
        if(i.second%2 == 1)
            return i.first;
    }
    return 0;
}
