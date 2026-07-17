#include<iostream>
using namespace std;

class Solution {
public:
    int forLoop(int low, int high) {
        int sum = 0;
        for (int i = low; i <= high; i++) {
            sum = sum + i;
        }
        return sum;
    }
};

int main() {
    Solution obj;
    int low, high;
    cin >> low >> high;
    cout << obj.forLoop(low, high);
    return 0;
}