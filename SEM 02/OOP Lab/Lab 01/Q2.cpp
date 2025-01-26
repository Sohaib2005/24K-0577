#include<iostream>
#include<algorithm>
int sum (int *arr, int *n);
int sum (int *a, int *n) {
    int s = 0;
    for(int i = 0;i < *n;i++)
    s += *(a + i);
    std::cout<<s;
   return 0;
}
int main() {
    int arr[20];
    int n;
    std::cout<<"Enter no of elements :\n";
        std::cin>>n;
    for(int i = 0; i < n ;i++) {
        std::cout<<"no "<<i + 1<<" :";
        std::cin>>*(arr + i);
    }
    sum(arr,&n);
    return 0;
}
