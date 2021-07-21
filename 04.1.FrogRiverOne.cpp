// Lesson 4 - Counting elements - Frog River
// Assessed time complexity - O(N)
// Scored for 100%

#include <set>
int solution(int X, vector<int> &A) {
    std::set<size_t> leaves;
    for(size_t i = 0; i < A.size(); ++i){
        if(A.size()-i < X-leaves.size()) //it will be impossible to reach all needed values
            return -1;
        leaves.insert(A[i]);
        if( static_cast<int> (leaves.size()) == (X))
            return static_cast<int> (i);
    }
    return -1;
}
