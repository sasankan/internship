#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int x, a, b, result;
        cin >> a >> b;
        result = a + b;
        int d[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
        int count = 0;
        
        while (result != 0) {
            x = result % 10;
            count += d[x];
            result /= 10;
        }
        
        cout << count << endl;
    }
    
    return 0;
}
