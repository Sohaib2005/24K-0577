#include <iostream>
#include <string>
using namespace std;
typedef struct Employee {
        int id;
        string name;
    }emp;
int main() {
    int n;
    cout << "Enter no of structures" << endl;
    cin >> n;
    emp e[n];
    for(int i = 0; i < n; i++) {
        cout << "Enter ID : ";
        cin >> e[i].id;
        getchar();
        cout <<"Enter name : ";
        getline(cin,e[i].name);
    }
    for(int i = 0; i < n - 1 ;i++) {
        emp temp;
        for(int j = 0; j < n - 1 - i; j++) {
            if(e[j].id > e[j+1].id) {
            temp = e[j];
            e[j] = e[j+1];
            e[j+1] = temp;
            }
        if(e[j].id == e[j+1].id) {
            if(e[j].name[0] > e[j+1].name[0]) {
            temp = e[j];
            e[j] = e[j+1];
            e[j+1] = temp;
            }
        }
        
        }
    }
    for(int i = 0; i < n; i++) {
      cout << "Employee id : " << e[i].id << "\n"
            << "Employee name : " << e[i].name << "\n"; 
    }
    // for(int i = 0; i < n - 1;i++) {
    //         emp temp;
    //     for(int j = 0; j < n - 1 - i; j++) {
    //         if(e[j].name[0] > e[j+1].name[0]) {
    //         temp = e[j];
    //         e[j] = e[j+1];
    //         e[j+1] = temp;
    //         }
    //     }
    // }
    // for(int i = 0; i < n; i++) {
    //   cout << "Employee id : " << e[i].id << "\n"
    //         << "Employee name : " << e[i].name << "\n"; 
    // }
    return 0;
}
