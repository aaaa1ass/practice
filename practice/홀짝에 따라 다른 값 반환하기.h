#pragma once
//Ȧ¦�� ���� �ٸ� �� ��ȯ�ϱ�
#include <iostream>

using namespace std;

int solution(int n) {
    int answer = 0;
    if (n % 2 != 0)
    {
        for (int i = 1; i <= n; i += 2)
        {
            answer += i;
        }
    }
    else
    {
        for (int i = 2; i <= n; i += 2)
        {
            answer += i * i;
        }
    }
    return answer;
}

int main()
{
    cout << solution(89);
    return 0;
}