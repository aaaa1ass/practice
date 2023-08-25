//flag에 따라 다른 값 반환하기
#include <iostream>

using namespace std;

int solution(int a, int b, bool flag) {
    int answer = 0;
    if (flag == true)
    {
        answer = a + b;
    }
    else
    {
        answer = a - b;
    }
    return answer;
}

int main() 
{
    cout << solution(10,5,true);
    return 0;
}