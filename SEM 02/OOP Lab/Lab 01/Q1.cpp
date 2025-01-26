#include<iostream>
#include<algorithm>
int sechighest (int *arr);
int sechighest (int *a) {
   std::sort(a,a + 20);
   int i;
   for( i = 0; i < 20;i++) {
       if(a[i] != a[0])
       break;
   }
   std::cout<<a[i];
   return 0;
}
int main() {
    int arr[20];
    for(int i = 0; i < 20 ;i++) {
        std::cout<<"Enter No "<<i + 1<<" :";
        std::cin>>arr[i];
    }
    sechighest(arr);
    return 0;
}
