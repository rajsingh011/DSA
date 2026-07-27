#include <iostream>
using namespace std;

class Solution {
public:
    void pattern9(int n) {
        
        for (int i = 1; i <= n; i++) {
            // spaces
            for (int j = 1; j <= n - i; j++) {
                cout << " ";
            }
            // stars
            for (int j = 1; j <= 2 * i - 1; j++) {
                cout << "*";
            }
            cout << endl;
        }
        
       
        for (int i = n - 1; i >= 1; i--) {
            // spaces
            for (int j = 1; j <= n - i; j++) {
                cout << " ";
            }
            // stars
            for (int j = 1; j <= 2 * i - 1; j++) {
                cout << "*";
            }
            cout << endl;
        }
    }
};
int main (){
    int n;
    n=5;
Solution obj;
    obj.pattern9(n);
return 0;
}
