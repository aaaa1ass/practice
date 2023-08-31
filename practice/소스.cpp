//수 조작하기 2
#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(vector<int> numLog) {
    string answer = "";
    for (int i = 1; i < numLog.size(); i++)
    {
        int result = numLog[i] - numLog[i - 1];
        if (result == 1)
        {
            answer += 'w';
        }
        else if (result == -1)
        {
            answer += 's';
        }
        else if (result == 10)
        {
            answer += 'd';
        }
        else if (result == -10)
        {
            answer += 'a';
        }
    }
    return answer;
}

using namespace std;

int main() 
{   
    vector<int> s = { 0, 1, 0, 10, 0, 1, 0, 10, 0, -1, -2, -1 };
    cout << solution(s);
    return 0;
}