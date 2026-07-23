#include <iostream>
using namespace std;

class Solution {
public:
    void pattern3(int n) {
        int i ,j;
        for (i=1;i<=n;i++){
            for (j=1;j<=i;j++){
                cout << j ;
            }
            cout << endl;
        }

    }
};
int main (){
    int n ;
    cin>>n ;
    Solution obj ;
    obj.pattern3(n);
    return 0;
    
}