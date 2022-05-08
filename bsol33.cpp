#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int N = 0, sum = 0;
    cout << "Введите N-число \n";
    cin >> N;
    cout << "Введите N-чисел:\n";
    do
    {
        int temp;
        cin >> temp;
        if (temp > 0)
        {
            sum += temp;
        }
        N -= 1;
    } while (N > 0);
    cout << "Сумма положительных чисел: " << sum;
}