//수열과 구간 쿼리 3
#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer = arr;
    for (int i = 0; i < queries.size(); i++)
    {
        swap(answer[queries[i][0]], answer[queries[i][1]]);
    }
    return answer;
}

using namespace std;

int main() 
{   
    vector<int> arr = { 0, 1, 2, 3, 4 };
    vector<vector<int>> q = { {0,3},{1,2},{1,4} };
    for(int i = 0;i<arr.size();i++)
        cout << solution(arr,q)[i];
    return 0;
}