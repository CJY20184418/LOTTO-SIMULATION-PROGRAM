#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    int number[45] = {};
    int lotto[6] = {};

    for (int i = 0; i < 45; i++)
    {
        number[i] = i + 1;
    }

    srand((unsigned int)time(0));

    int x, y, t;

    for (int i = 0; i < 100; i++)
    {
        x = rand() % 45;
        y = rand() % 45;

        t = number[x];
        number[x] = number[y];
        number[y] = t;
    }

    for (int i = 0; i < 6; i++)
    {
        cout << (i + 1) << " 번 : ";
        cin >> lotto[i];
    }
    
    for (int i = 0; i<6; i++)
    { 
        for (int b = 0; b<6; b++)
            { if(i==b){ } else if(lotto[i] == lotto[b]){ printf("중복된 숫자는 입력할 수 없습니다."); exit(1); }
            else if(lotto[i] > 45 || lotto[i] < 1 ){ printf("1~45 입력"); exit(1); }
            } 
    }

    int count = 0;
    int second = 0;

    for (int i = 0; i < 6; i++)
    {

        for (int j = 0; j < 6; j++)
        {

            if (lotto[i] == number[j])
            {
                count++;
                break;
            }
        }
    }

    if (count == 5)
    {
        for (int i = 0; i < 6; i++)
        {
            if (lotto[i] == number[6])
            {
                second++;
                break;
            }
        }
    }
    cout << "로또 번호 : ";

    for (int i = 0; i < 6; i++)
    {

        cout << number[i] << " ";
    }

    cout << "추가 번호 : " << number[6] << endl;

    cout << "내 번호 : ";
    for (int i = 0; i < 5; i++)
    {
        cout << lotto[i] << " ";
    }

    cout << lotto[5] << endl;

    if (count == 3)
    {
        cout << "5등";
    }
    else if (count == 4)
    {
        cout << "4등";
    }
    else if (count == 5 && second == 0)
    {
        cout << "3등";
    }
    else if (count == 5 && second == 1)
    {
        cout << "2등";
    }
    else if (count == 6)
    {
        cout << "1등!!!!!!!!";
    }
    else
    {
        cout << "낙첨 ";
    }

    return 0;
}
