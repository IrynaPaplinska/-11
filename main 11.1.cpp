#include <iostream>
using namespace std;

const int N = 4;

// --- Функція введення матриці ---
void InputMatrix(double A[N][N]) {
    cout << "Введіть матрицю 4x4:" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> A[i][j];
        }
    }
}

// --- Функція обчислення суми від’ємних елементів у непарних рядках ---
double SumNegativeOddRows(double A[N][N]) {
    double sum = 0;

    for (int i = 0; i < N; i++) {
        // Непарні рядки: 1-й і 3-й (індекси 0 і 2)
        if ((i + 1) % 2 != 0) {
            for (int j = 0; j < N; j++) {
                if (A[i][j] < 0) {
                    sum += A[i][j];
                }
            }
        }
    }

    return sum;
}

int main() {
    double A[N][N];

    // Введення даних
    InputMatrix(A);

    // Обчислення результату через функцію
    double result = SumNegativeOddRows(A);

    cout << "Сума від’ємних елементів у непарних рядках = " << result << endl;

    return 0;
}