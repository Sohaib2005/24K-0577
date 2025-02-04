#include <iostream>
#include <string>
#include <vector>

void* addarr(void* nums, int count) {
    int* total { new int(0) };
    for(int i = 0; i < count; i++) {
        *total += static_cast<int*>(nums)[i];
    }
    return static_cast<void*>(total);
}

int main(int argc, char *argv[]) {
    // int* nums { new int[argc - 1] };
    std::vector<int> nums {};
    for(int i = 1; i < argc; i++) {
        nums.push_back(std::stoi(argv[i]));
    }

    int* total { static_cast<int*>(addarr(static_cast<void*>(&nums[0]), nums.size())) };
    std::cout << "Total: " << *total << '\n';
    for(int x : nums) {
        std::cout << x << ' ';
    }

    delete total;
    return 0;
}
