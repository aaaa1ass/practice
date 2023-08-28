//원소들의 곱과 합
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int times = 1;
    int sum = 0;
    for (int i = 0; i < num_list.size(); i++)
    {
        times *= num_list[i];
        sum += num_list[i];
    }
    if (times < sum * sum)
    {
        answer = 1;
    }
    else
    {
        answer = 0;
    }

    return answer;
}
int main() 
{   
    vector<int> v = { 3, 4, 5, 2, 1 };
    cout << solution(v);
    return 0;
}