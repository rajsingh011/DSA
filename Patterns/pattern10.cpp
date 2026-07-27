#include <iostream>
using namespace std;

class Solution {
public:
    void pattern10(int n) {
int i,j;
for (i=0;i<n;i++){
    for (j=0;j<i+1;j++){
        cout << "*";
    }
    cout << endl;
}
for (i=0;i<n;i++){
    for(j=0;j<n-i-1;j++){
        cout << "*";
    }
    cout << endl;
}
    }
};

int main(){
    int n;
    n=5;
    Solution obj;
    obj.pattern10(n);
    return 0;
}