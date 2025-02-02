#include <iostream>
#include<string>
using namespace std;
void* addarr(int *s,int count) {
        for(int i = 1; i < count;i++) {
            s[i] += i;
        }
        return (void*)s;
    }
int main(int count,char *arr[]) {
    int s[count - 1];
    for(int i = 1; i < count ; i++) {
     s[i - 1] = stoi(arr[i]);    
    }
    
    cout << addarr(s, count)<<endl;
    for( int i = 0; i < count - 1; i++) {
        cout << s[i] << " ";
    }
    
    return 0;
}
