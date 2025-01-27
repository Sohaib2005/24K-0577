#include <iostream>
#include <string>
using namespace std;
int main() {
string name;
float arr[5];
cout << "Enter Your name : ";
cin >> name;
cout << "Enter your marks : ";
float sum = 0;
for(int i = 0; i < 5 ;i++) {
cin >> arr[i];
sum+=arr[i];
}
cout << "Student name : " << name << "\nTest scores : ";
for(int i = 0; i < 5 ;i++) {
cout<< arr[i] << " ";
}
cout << "\nAverage Test score : " << sum/5;
    return 0;
}
