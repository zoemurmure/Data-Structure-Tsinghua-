#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

void swap(int &a, int &b) {
    a ^= b;
    b ^= a;
    a ^= b;
}

void bubble_sorting(vector<int> &a, int n) {
    for (bool sorted = false; sorted = !sorted; n--) {
        for (auto i = 1; i < n; i++) {
            if (a[i-1] > a[i]) {
                swap(a[i-1], a[i]);
                sorted = false;
            }
        }
    }
}

int main() {
    vector<int> num{4,7,2,9,3,54,1};
    bubble_sorting(num, num.size());
    for (auto i : num) {
        cout << i << " ";
    }

    return 0;
}
