#pragma once
//수 조작하기 1
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int n, string control) {
    int answer = n;
    for (int i = 0; i < control.length(); i++)
    {
        if (control[i] == 'w')
        {
            answer += 1;
        }
        else if (control[i] == 's')
        {
            answer -= 1;
        }
        else if (control[i] == 'd')
        {
            answer += 10;
        }
        else
        {
            answer -= 10;
        }
    }

    return answer;
}

using namespace std;

int main()
{
    string s = "wsdawsdassw";
    cout << solution(0, s);
    return 0;
}