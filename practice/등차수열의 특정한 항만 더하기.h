#pragma once
//���������� Ư���� �׸� ���ϱ�
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