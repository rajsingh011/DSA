#include <iostream>
using namespace std;

class Solution {
public:
    int countDigit(int n) {

        int cnt = 0;

        while (n > 0) {
            cnt++;
            n /=10;
        }

        return cnt;
    }
};

int main() {
    Solution obj;
    cout << obj.countDigit(234);

    return 0;
}