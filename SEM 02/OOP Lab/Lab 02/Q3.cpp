#include <iostream>
using namespace std;

int main() {
    int len = 5;
    int count = 0;
    int* arr = new int[len];

    while (1) { 
        if (count == len) {
            int* a = new int[2 * len];
            len = 2 * len;
            for(int i = 0; i < count; i++) {
                a[i] = arr[i];
            }
            arr = a;
        }
        cin >> arr[count];
        if (arr[count] == -1) {
            break;
        }
        count++;
    }
    
    cout << count << endl;
    return 0;
}
