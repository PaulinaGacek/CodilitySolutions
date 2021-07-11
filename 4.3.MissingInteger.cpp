// Lesson 4 - Missing Integer (Medium)
// Scored for 100%
// Time Complexity - O(n)

#include <iostream>
#include <vector>
#include <set>

int solution(std::vector<int> &A) {
    std::set<int> elements;
    int max_nr = 0;
    for(size_t i = 0; i < A.size(); ++i )// O(n)
    {
        if(A[i]>0)
        {
            elements.insert(A[i]);
            if(A[i] > max_nr)
                max_nr = A[i];
        }
    }
    for(int i = 1; i <= max_nr + 1; ++i) //O(k), k<=1 000 000
    {
        if(elements.find(i)==elements.end())
            return i;
    }
    return 1;
}
