#include <iostream>
#include <cmath> 
#include <locale.h>
using namespace std;

// 1. Функция для вычисления нашего уравнения: f(x) = 2^x - 2x^2 + 1
double f(double x) 
{
    return pow(2, x) - 2 * pow(x, 2) + 1;
}

int main()
{
    setlocale(LC_ALL, "RUS");
    
    double Xstart = -3.0; 
    double Xend = 8.0;    
    double step = 1.0;    

    
    int n = (Xend - Xstart) / step + 1; 
    double X[20], Y[20]; 

    cout << "Задание 7. Отделение корней уравнения 2^x - 2x^2 + 1 = 0" << endl;
    cout << "Шаг: " << step << endl << endl;

    
    for (int i = 0; i < n; i++) 
    {
        X[i] = Xstart + i * step;
        Y[i] = f(X[i]);
        cout << "x: " << X[i] << " -> y: " << Y[i] << endl;
    }

    cout << endl << "--- Результаты проверки ---" << endl;

   
    for (int i = 0; i < n - 1; i++)
    {
        
        if (Y[i] * Y[i + 1] <= 0) 
        {
            cout << ">>> Корень на отрезке [" << X[i] << "; " << X[i + 1] << "]" << endl;
        }
    }

    return 0;
}
