// Lesson 8 - Leader - Dominator
// Scored for 100%
#include <iostream>
#include <vector>
#include <map>

int solution(std::vector<int> &A) {
    if(A.empty())
        return -1;
    std::map<int,size_t> occurrence; //{nr,occurrence}
    for(const auto& i: A) // O(n)
        occurrence[i]++;
    bool dominator_found = false;
    int dominator_value = 0;
    for(const auto& i : occurrence) // O(n)
    {
        if(i.second > A.size()/2)
        {
            dominator_value = i.first;
            dominator_found = true;
            break;
        }
    }
    if(dominator_found)
    {
        for(size_t i = 0; i < A.size(); ++i)
        {
            if(A[i] == dominator_value)
                return i;
        }
    }
    return -1;
}
