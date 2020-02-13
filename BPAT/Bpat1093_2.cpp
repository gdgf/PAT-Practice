#include <cstdio>
#include <iostream>
using namespace std;
int main() {
    int arr[127] = {0};
    string a;
    string b;
    getline(cin, a);
    getline(cin, b);
    string c = a + b;
    for (int i = 0; i < c.length(); i ++) {
        if (arr[c[i]] == 0) {
            printf("%c", c[i]);
        }
        arr[c[i]] ++;
    }
    return 0;
}