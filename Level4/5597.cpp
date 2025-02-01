#include <iostream>
#define STUDENT_NUM 30

using namespace std;

int main(void)
{
    int *students = (int *)calloc(30, sizeof(int) * STUDENT_NUM);
    int submit;

    for (int i = 0; i < STUDENT_NUM; i++)
    {
        cin >> submit;
        students[submit - 1] = 1;
    }
    for (int i = 0; i < STUDENT_NUM; i++)
    {
        if (!students[i])
        {
            cout << i + 1 << endl;
        }
    }

    free(students);

    return 0;
}