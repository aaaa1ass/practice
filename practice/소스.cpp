//이어 붙인 수
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int even = 0;
    int odd = 0;
    for (int i = 0; i < num_list.size(); i++)
    {
        if (num_list[i] % 2 == 0)
        {
            even = even * 10 + num_list[i];
        }
        else
        {
            odd = odd * 10 + num_list[i];
        }
    }
    answer = even + odd;
    return answer;
}
int main() 
{   
    vector<int> v = { 3, 4, 5, 2, 1 };
    cout << solution(v);
    return 0;
}