#include <iostream>
using namespace std;

class Solution {
public:
    void pattern12(int n) {
        for (int i = 1; i <= n; i++) {
            // left part: 1 to i
            for (int j = 1; j <= i; j++) {
                cout << j;
            }
            // middle spaces
            for (int j = 1; j <= 2 * (n - i); j++) {
                cout << " ";
            }
            // right part: i to 1
            for (int j = i; j >= 1; j--) {
                cout << j;
            }
            cout << endl;
        }
    }
};

int main() {
    int n;
    n = 5;
    Solution obj;
    obj.pattern12(n);
    return 0;
}