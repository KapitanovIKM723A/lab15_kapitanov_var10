#include <iostream>
#include <clocale>

using namespace std;
int main() {
    setlocale(LC_ALL, "ukr");
    int a[20];
    cout << "Введiть 20 цiлих чисел:\n";
    for (int i = 0; i < 20; i++) {
        cin >> a[i];
    }
    int b[20];
    int sizeB = 0;
    for (int i = 0; i < 20; i++) {
        if ((a[i] >= 10 && a[i] <= 99) || (a[i] <= -10 && a[i] >= -99)) {
            b[sizeB++] = a[i];
        }
    }
    for (int i = 0; i < sizeB; i++) {
        for (int j = 0; j < sizeB - 1 - i; j++) {
            if (b[j] > b[j + 1]) {
                int temp = b[j];
                b[j] = b[j + 1];
                b[j + 1] = temp;
            }
        }
    }
    cout << "Вiдсортований масив b:\n";
    for (int i = 0; i < sizeB; i++) {
        cout << b[i] << " ";
    }
    cout << endl;
    return 0;
}