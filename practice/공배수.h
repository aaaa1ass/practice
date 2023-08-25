#pragma once
//°ø¹è¼ö
#include <iostream>

using namespace std;

int solution(int number, int n, int m) {
    int answer = 0;
    if (number % n == 0 && number % m == 0)
    {
        answer = 1;
    }
    else
    {
        answer = 0;
    }
    return answer;
}

int main()
{
    cout << solution(89, 8, 10);
    return 0;
}