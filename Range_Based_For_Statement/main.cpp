//
//  main.cpp
//  Range_Based_For_Statement
//
//  Created by 세광 on 2021/06/18.
//

#include <iostream>

using namespace std;

int main() {
    int arr[2][3] = { {1, 2, 3}, {4, 5, 6} };
    
    //레퍼런스 변수로 선언
    for(int (&ln)[3] : arr) {
        for(int &col : ln) {
            cout << col << ' ';
        }
        cout << endl;
    }
    cout << endl;
    
    // 포인터 변수로 선언
    for(int (*ln)[3] = arr; ln < arr + 2; ln++) {
        for(int *c = *ln; c < *ln + 3; c++) {
            cout << *c << ' ';
        }
        cout << endl;
    }
    cout << endl;
    
    // using auto
    for(auto &ln : arr) {
        for(auto &col : ln) {
            cout << col << ' ';
        }
        cout << endl;
    }
    cout << endl;
}
