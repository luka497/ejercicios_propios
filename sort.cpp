#include <iostream>

using namespace std;

int main() {
    int N[] = {1, 4, 7, 8, 3, 2, 5, 6, 0};
    int largo  = sizeof(N) / sizeof(N[0]);
    for (int i = 0; i < largo ; i++) {
        int m = i;
        for (int j = i + 1; j < largo ; j++) {
            if (N[j] < N[m]) {
                m = j;
            }
        }
      swap(N[m],N[i]);
    }

    for (int i = 0; i < largo ; i++) {
        cout << N[i] << " ";
    }
    return 0;
}