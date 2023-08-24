#pragma once
//더 크게 합치기
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
    int ab = function(a, b);
    int ba = function(b, a);

    if (ab > ba)
        return ab;
    return ba;
}

int main()
{
    cout << solution(89, 8);
    return 0;
}