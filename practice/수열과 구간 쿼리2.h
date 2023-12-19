#pragma once
//수열과 구간 쿼리 2
#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    for (int i = 0; i < queries.size(); i++)
    {
        int min = 1000001;
        for (int j = queries[i][0]; j <= queries[i][1]; j++)
        {
            if (arr[j] > queries[i][2] && arr[j] < min)
            {
                min = arr[j];
            }
        }
        if (min == 1000001)
            answer.push_back(-1);
        else
            answer.push_back(min);
    }

    return answer;
}

using namespace std;

int main()
{
    vector<int> arr = { 0, 1, 2, 4, 3 };
    vector<vector<int>> q = { {0, 4, 2},{0, 3, 2},{0, 2, 2} };
    for (int i = 0;i < q.size();i++)
        cout << solution(arr, q)[i];
    return 0;
}