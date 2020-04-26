#include "mainwindow.h"

void randSort(int *m, int size)
{
    int buf;
    int pos, pos2;
    for (int i = 0; i < rand() % 50 + 10; i++)
    {
        pos = rand() % size;
        pos2 = rand() % size;
        int buf = m[pos];
        m[pos] = m[pos2];
        m[pos2] = buf;
    }
}
