//nÀÇ ¹è¼ö
#include <iostream>
#include <string>

using namespace std;

int solution(int num, int n) {
    int answer = 0;
    if (num % n == 0)
        answer = 1;
    else
        answer = 0;

    return answer;
}

int main() 
{
    cout << solution(89, 8);
    return 0;
}