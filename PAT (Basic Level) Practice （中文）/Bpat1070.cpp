/*
 * 水题
 */

#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int* array = new int[n];
    for (int i = 0; i < n; i++)
        cin >> array[i];

    sort(array, array + n);

    for (int i = 0; i < n-1; i++) {
        double temp = (array[i] + array[i+1]) / 2.0;
        array[i + 1] = temp;
    }
    cout << (int)array[n - 1] << endl;
}