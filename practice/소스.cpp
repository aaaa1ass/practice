//두 수의 연산값 비교하기
#include <iostream>
#include <string>

using namespace std;

int function(int a, int b)
{
    if (a >= 1000)
    {
        return b * 10000 + a;
    }
    else if (a >= 100)
    {
        return b * 1000 + a;
    }
    else if (a >= 10)
    {
        return b * 100 + a;
    }
    else
    {
        return b * 10 + a;
    }
}

int solution(int a, int b) {
    int ab = function(b, a);
    
    if (ab > 2 * a * b)
        return ab;
    return 2 * a * b;
}

int main() 
{
    cout << solution(89, 8);
    return 0;
}