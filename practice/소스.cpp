//문자열 겹쳐쓰기
#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string overwrite_string, int s) {
    for (int i = s; i < s + overwrite_string.size(); i++)
    {
        my_string[i] = overwrite_string[i - s];
    }
    return my_string;
}