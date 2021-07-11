// Lesson 10 - Count Factors (Easy)
// Scored for 100%

#include <cmath>
int solution(int N) {
    int factors = 0;
    for(int i = 1; i <= sqrt(N);++i)
    {
        if(N%i==0)
            factors += 2;
    }
    if((int)sqrt(N)*(int)sqrt(N) == N)
        factors--;
    return factors;
}
