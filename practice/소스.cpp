//[PCCP 기출문제] 1번 / 붕대 감기
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <iostream>

// bandage_len은 배열 bandage의 길이입니다.
// attacks_rows는 2차원 배열 attacks의 행 길이, attacks_cols는 2차원 배열 attacks의 열 길이입니다.
int solution(int bandage[], size_t bandage_len, int health, int** attacks, size_t attacks_rows, size_t attacks_cols) {
    int answer = 0;
    answer = health;
    int recover_time = 0;
    int attack_index = 0;

    std::cout << "0 " << answer << " " << recover_time << " " << std::endl;

    for (int i = 1;i <= attacks[attacks_rows - 1][0];i++) {

        if (i == attacks[attack_index][0])
        {
            answer -= attacks[attack_index][1];
            attack_index++;
            recover_time = 0;
        }
        else
        {
            recover_time++;

            answer += bandage[1];

            if (recover_time >= bandage[0]) {
                answer += bandage[2];
                recover_time = 0;
            }

            if (answer > health) {
                answer = health;
            }
            else if (answer <= 0) {
                return -1;
            }
        }
        std::cout << i << " " << answer << " " << recover_time << " " << std::endl;

    }
    return answer;
}

int main()
{
    int bandage[] = { 5, 1, 5 };
    int attack1[2] = { 2,10 };
    int attack2[2] = { 9,15 };
    int attack3[2] = { 10,5 };
    int attack4[2] = { 11,5 };
    int* attacks[4] = { attack1,attack2,attack3,attack4 };

    std::cout << solution(bandage, 3, 30, attacks, 4, 2);

    return 0;
}