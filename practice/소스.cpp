//��ҹ��� �ٲ㼭 ����ϱ�
#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str;
    cin >> str;
    for (int i = 0; i < str.size(); i++)
    {
        if ('a' <= str[i] && str[i] <= 'z')
            cout << (char)(str[i] - 32);
        else
            cout << (char)(str[i] + 32);
    }
    return 0;
}