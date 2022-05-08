#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int myArray[15], sum = 0;
    string ans;
    cout << "Заполнить массив вручную - 1 \n Заполнить массив случайными числами - 2 \n";
    cin >> ans;
    if (ans == "1")
    {
        for (int i = 0; i < size(myArray); i++)
        {
            cout << " ";
            cin >> myArray[i];
            sum+= myArray[i];
        }
    }
    else
    {
        srand(time(0));
        for (int i = 0; i < size(myArray); i++)
        {
            myArray[i] = rand();
            cout << " " << myArray[i];
            sum += myArray[i];
        }
    }
    cout << "\n Среднее арифметическое элементов: " << sum / 15.0;
}
