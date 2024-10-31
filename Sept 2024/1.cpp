// Pattern 

#include<iostream>
using namespace std;
int main() {
    int n = 3;

    int i = 0;
    int count = 0;
    while (i < n) {

        int j = 0;
        while (j < n) {
            // cout << j+1 << " "; // 1 2 3 
            // cout << n-j << " "; // 3 2 1
            cout << count+1 << " ";
            j++;
            count++;
        }
        cout << endl;
        i++;
        
    }
    return 0;
}