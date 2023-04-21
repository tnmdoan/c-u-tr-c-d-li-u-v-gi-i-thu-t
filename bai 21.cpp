#include <iostream>
using namespace std;

int T(int n) {
    if (n == 1) 
        return 1;
      
        return n * T(n-1);
    
}

int main() {
    int n = 3;
    int result = T(n);
    cout << "tong : " << result << endl; // k?t qu?: T(5) = 120
    return 0;
}




