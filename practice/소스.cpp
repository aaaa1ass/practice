//코드 처리하기
#include <iostream>
#include <vector>
#include <string>

using namespace std;

string solution(string code) {
    string answer = "";
    int mode = 0;
    for (int i = 0; i < code.length(); i++)
    {
        if (code[i] == '1')
        {
            if (mode == 0)
                mode = 1;
            else
                mode = 0;
        }
        else
        {
            if (mode == 0)
            {
                if (i % 2 == 0)
                {
                    answer += code[i];
                }
            }
            else
            {
                if (i % 2 == 1)
                {
                    answer += code[i];
                }
            }
        }
    }
    if (answer == "")
        return "EMPTY";
    return answer;
}
int main() 
{   
    cout << solution("abc1abc1abc");
    return 0;
}