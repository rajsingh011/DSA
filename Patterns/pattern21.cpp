#include <iostream>
using namespace std;
int i,j;
void print21(int n){
for (i=0;i<n;i++){
    for (int j=0;j<n;j++){
        if(i==0 || j==0 || i==n-1 || j==n-1){
            cout << "*";
        }
        else cout << " ";
    }
    cout << endl;
}

}
int main(){
int n;
n=5;
print21(n);
    
    return 0;
}
