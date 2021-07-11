// Lesson 10 - Prime and composite numbers - MinPerimeterRectangle (Easy)
// Time complexity - O(sqrt(N))
// Scored for 100%

#include <cmath>
int solution(int N) {
    int min_perimeter = 2 * (1+N);
    for(int i = 2; i <= sqrt(N);++i)
    {
        if(N%i==0 && (1+N > i + N/i))
            min_perimeter = 2 * (i + N/i);
    }
    return min_perimeter;
}
