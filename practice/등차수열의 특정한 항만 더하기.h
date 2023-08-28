#pragma once
//등차수열의 특정한 항만 더하기
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int solution(int a, int d, vector<bool> included) {
    int answer = 0;
    for (int i = 0; i < included.size(); i++)
    {
        if (included[i] == true)
            answer += a + i * d;
    }
    return answer;
}
int main()
{
    vector<bool> v = { true,false,false,true,true };
    cout << solution(3, 4, v);
    return 0;
}