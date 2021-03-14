#include <iostream>
using namespace std;

void create(int** array, int array_len, int array_first = 0, int array_step = 0) {
    *array = new int[array_len];

    for (int i = 0; i < array_len; i++) {
        (*array)[i] = array_step * i + array_first;
    }
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

void destroy(int* array) {
    if (array != nullptr) {
        delete[] array;
        int* array = nullptr;
    }
}

int main()
{
    int array_len, array_first, array_step;
    int* array;

    cin >> array_len;
    cin >> array_first;
    cin >> array_step;

    create(&array, array_len, array_first, array_step);
    sort(array, array_len);
    print(array, array_len);

    destroy(array);

    return 0;
}
