#pragma once
//주사위 게임 2
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int solution(int a, int b, int c) {
    int answer = 0;
    if (a != b && b != c)
    {
        answer = a + b + c;
    }
    else if (a == b && b == c)
    {
        answer = (a + b + c) * (a * a + b * b + c * c) * (a * a * a + b * b * b + c * c * c);
    }
    else
    {
        answer = (a + b + c) * (a * a + b * b + c * c);
    }
    return answer;
}
int main()
{
    cout << solution(2, 6, 1);
    return 0;
}