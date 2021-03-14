#include <iostream>
using namespace std;

int* create(int array_len, int array_first = 0, int array_step = 0) {
    int* new_array = new int[array_len];

    for (int i = 0; i < array_len; i++) {
        new_array[i] = array_step * i + array_first;
    }
    return new_array;
}

int* sort(int* array, int array_len) {
    int i = 1;
    int tmp;
    while (i < array_len) {
        int j = i;
        while (j > 0 and array[j - 1] > array[j]) {
            tmp = array[j - 1];
            array[j - 1] = array[j];
            array[j] = tmp;
            j -= 1;
        }
        i += 1;
    }
    return array;
}

int* print(int* array, int array_len) {
    for (int i = 0; i < array_len; i++) {
        if (i == 0) cout << "[";
        cout << array[i];
        if (i < array_len - 1) {
            cout << ", ";
        }
        else { cout << "]"; }
    }
    return array;
}

int main()
{
    int array_len;
    int array_first;
    int array_step;

    cin >> array_len;
    cin >> array_first;
    cin >> array_step;

    int* array = create(array_len, array_first, array_step);

    print(sort(array, array_len), array_len);

    delete[] array;
    return 0;
}
