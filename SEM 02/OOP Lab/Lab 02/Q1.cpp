#include<iostream>
#include<string>
using namespace std;
int main(int argc,char **arr) {
    if(argc < 2) {
        return 1;
    }
    int sum = 0;
    for(int i = 1;i < argc; i++) {
        sum += stoi(arr[i]);
    }
    cout<<sum;
    return 0;
}
