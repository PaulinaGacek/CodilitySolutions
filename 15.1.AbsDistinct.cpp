// Lesson 15 - Caterpillar method - AbsDistinct (Easy)
// Scored for 100%


#include <iostream>
#include <cmath>
#include <set>
#include <vector>

int solution(std::vector<int> &A) {
    std::set<int> s;
    for(const auto& i : A)
        s.insert(abs(i));
    return s.size();
}
