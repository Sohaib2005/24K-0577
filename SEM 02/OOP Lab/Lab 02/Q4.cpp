#include <iostream>
#include <string>
using namespace std;
typedef struct Employee {
        int id;
        string name;
        int salary;
    }emp;
    typedef struct Organization {
        string org_name;
        string org_num;
        emp e;
    }org;
int main() {
    org o1 = {"NU-Fast",
              "NUFAST123ABC",
              {
              127,
              "Linus Sebastian",
              400000
              }
             };
    cout << "Organisation Name : " << o1.org_name << "\n"
    << "Organisation Number : " << o1.org_num << "\n"
    << "Employee id : " << o1.e.id << "\n"
    << "Employee name : " << o1.e.name << "\n"
    << "Employee Salary : " << o1.e.salary << "\n"; 
    return 0;
}
