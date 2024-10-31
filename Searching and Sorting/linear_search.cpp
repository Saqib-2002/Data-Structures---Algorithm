#include<iostream>
using namespace std;
class linearSearch {
    int arr[100], size, num, res;
    int Search() {
            for (int i = 0; i < size; i++) {
                if(num == arr[i])
                    return i;
            }
            return -1;
        }
    public:
        void input () {
            cout <<"Enter the Size of the array" << endl;
            cin >> size;
            cout << "Enter the array numbers" << endl;
            for (int i = 0; i < size; i++) {
                cout << "Arr[" << i << "] = ";
                cin >> arr[i];
            }
        }
        void display() {
            cout << "Enter the number to be searched on an array" << endl;
            cin >> num;
            res = Search();
            if (res == -1)
                cout << num << " not found in an array." << endl;
            else
                cout << num << " found at " << res << " index." << endl;
        }
};
int main() {
    linearSearch s;
    s.input();
    s.display();
    return 0;
}