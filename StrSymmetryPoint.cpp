
// Training 4 - June 2021
// Time Complexity O(length(S))
// Scored for 100%
#include <string>
int solution(std::string &S) {
    if(S.size()%2==0)
        return -1;
    for(size_t i = 0; i < S.size()/2; ++i){
        if(S[i]!=S[S.size()-1-i])
            return -1;
    }
    return static_cast<int>(S.size()/2);
}
