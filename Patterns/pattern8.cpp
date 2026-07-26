#include <iostream>
using namespace std;

class Solution {
public:
    void pattern8(int n) {
        for (int i = 1; i <= n; i++) {
            // print (i-1) leading spaces
            for (int j = 1; j <= i - 1; j++) {
                cout << " ";
            }
            // print stars: 2*(n-i)+1
            for (int j = 1; j <= 2 * (n - i) + 1; j++) {
                cout << "*";
            }
            cout << "\n";
        }
    }
};

int main (){
    int n ;
    cin>>n ;
    Solution obj ;
    obj.pattern8(n);
    return 0;
    
}