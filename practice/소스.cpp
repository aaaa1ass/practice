//마지막 두 원소
#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    if (num_list[num_list.size() - 1] > num_list[num_list.size() - 2])
    {
        num_list.push_back(num_list[num_list.size() - 1] - num_list[num_list.size() - 2]);
    }
    else
    {
        num_list.push_back(num_list[num_list.size() - 1] * 2);
    }
    return num_list;
}

using namespace std;

int main() 
{   
    vector<int> num_list = { 2, 1, 6 };
    cout << solution(num_list)[3];
    return 0;
}