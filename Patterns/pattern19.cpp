#include <iostream>
using namespace std;
//star
//space
//star
class Solution {
public:
    void pattern19(int n) {
        int i,j;
       int iniS = 0;
for (i=0;i<n;i++){
    for (j=1;j<=n-i;j++){
        cout << "*";
    }
   for (j=0;j<iniS;j++){
    cout << " ";
   }
   for (j=1;j<=n-i;j++){
        cout << "*";
    }
    iniS +=2;
    cout << endl;

   
}
  int inis2 = 8;
for (int i=1;i<=n;i++){
    for (j=0;j<i;j++){
        cout << "*";
    }
   for (j=0;j<inis2;j++){
    cout << " ";
   }
   for (j=1;j<=i;j++){
        cout << "*";
    }
    inis2 -=2;
    cout << endl;
}
}

};
int main (){
    int n ;
    n=5;
    Solution obj ;
    obj.pattern19(n);
    return 0;
}