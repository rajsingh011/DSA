#include <iostream>
using namespace std;
class Solution {
public:
    void pattern20(int n) {
        int i,j; 
        int space = 2*n-2;
        for (i=1;i<=2*n-1;i++){
            int star = i;
            if (i>n) star = 2*n-i;
            for (j=1;j<=star;j++){
                cout << "*";
            }
            for(j=1;j<=space;j++){
                cout << " ";
            }
            for (j=1;j<=star;j++){
                cout << "*";
            }
            if (i<n)space -=2;
            else space +=2;
            cout << endl;
        }
    }
};
int main(){
    int n;
    n=5;
    Solution Obj;
    Obj.pattern20(n);
    return 0;
}