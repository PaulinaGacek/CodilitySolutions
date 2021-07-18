// Time complexity O(n)
// Scored for 100%

#include<iostream>
#include<vector>
int solution(vector<int> &A) {
    vector<int> occurrence(A.size(),0);
    for(size_t i = 0; i < A.size();++i)
    {
        if(A[i] > (int)A.size())
            return 0;
        occurrence[A[i]-1]++;
    }
    for(size_t i = 0; i < A.size();++i)
    {
        if(occurrence[i]!=1)
            return 0;
    }
    return 1;
}
