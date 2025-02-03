#include <iostream>
#include <string>
#include <vector>
using namespace std;

typedef struct Subject {
    string subject;
} sub;

typedef struct Student {
    int id;
    vector<sub> subs;
} s;

int main() {
    int n;
    cout << "Enter no of students" << endl;
    cin >> n;
    vector<s> student(n);
   
    for (int i = 0; i < n; i++) {
        cout << "Enter ID : ";
        cin >> student[i].id;
        cin.ignore();
       
        while (true) {
            string sub_name;
            cout << "Enter subject name : ";
            getline(cin, sub_name);
            if (sub_name.empty())
                break;
            student[i].subs.push_back({sub_name});
        }
    }

    for (int i = 0; i < n; i++) {
        cout << "Student id : " << student[i].id << "\n";
         cout << "Subjects of ID " << i <<" : ";
        for (size_t j = 0; j < student[i].subs.size(); j++)
            cout << student[i].subs[j].subject << "\n";
    }

    return 0;
}
