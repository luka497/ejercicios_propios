#include <iostream>
using namespace std;

void sort(int *list, int Largo) {
    for (int i = 0; i < Largo - 1; i++) {
        for (int j = i+ 1; j < Largo  ; j++) {
           if (list[j] < list[i]) {
               swap(list[i], list[j]);
           }
       }
   }
}

int main() {
    int list[] = {5, 2, 9, 1, 5, 6};
    int largo = sizeof(list) / sizeof(list[0]);
    sort(list, largo);
    cout << "Lista ordenada: ";
    for (int i = 0; i < largo; i++) {
        cout << list[i] << " ";
    }
  return 0;
}