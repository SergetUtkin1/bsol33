#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    int m, n, cntOfCol=0, zeroElements=0;
    cout << "Введите целые числа m>=5 - кол-во строк, n>=5 - столбцов:" << "\n";
    cin >> m >> n;

    int** a = new int* [m];
    for (int i = 0; i < n; i++)
    {
        a[i] = new int[n];
    }


    for (int i = 0; i < n; i++)
    {
        int strick = 1;
        for (int j = 0; j < m; j++)
        {
            cout << "\n Элемент " << j << "й строки " << i << "го столбца: ";
            cin >> a[j][i];
            if((j != 0) && (a[j][i - 1] < a[j][i]))
            {
                strick += 1;
            }
            if (a[j][i] == 0)
            {
                zeroElements += 1;
            }
        }
        if (strick == 4)
        {
            cntOfCol += 1;
        }
    }

    cout << "\n Исходная матрица: \n";
    for (int i = 0; i < m; i++)
    {
        cout << "\n";
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
    }
    cout << "\n Кол-во столбцов упорядоченных по возрастанию: " << cntOfCol << "\n Кол-во нулевых элементов: " << zeroElements;
}
