#pragma once
//문자열 곱하기
#include <iostream>
#include <string>

using namespace std;

string solution(string my_string, int k) {
    string answer = "";
    for (int i = 0; i < k; i++)
    {
        answer += my_string;
    }
    return answer;
}

int main()
{
    cout << solution("Hello", 3);
    return 0;
}