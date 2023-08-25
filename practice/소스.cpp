//추억 점수
#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer;
    for (int i = 0; i < photo.size(); i++)
    {
        int sum = 0;
        for (int j = 0; j < photo[i].size(); j++)
        {
            bool isin = false;
            int index = 0;
            for (int k = 0; k < name.size(); k++)
            {
                if (name[k] == photo[i][j])
                {
                    index = k;
                    isin = true;
                    break;
                }
            }
            if (isin == true)
            {
                sum += yearning[index];
            }
        }
        answer.push_back(sum);
    }
    return answer;
}

int main() 
{   
    vector<string> name = { "may", "kein", "kain", "radi" };
    vector<int> yearning = { 5, 10, 1, 3 };
    vector<vector<string>> photo = { {"may", "kein", "kain", "radi"} ,{"may", "kein", "brin", "deny"},{"kon", "kain", "may", "coni"} };
    
    vector<int> s = solution(name, yearning, photo);
    for (int i = 0; i < s.size(); i++)
    {
        cout << s[i]<<' ';
    }
    return 0;
}