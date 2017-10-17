#include "stdafx.h"
#include <iostream>
#include <sstream>
using namespace std;
int main() {
    int k;
    char q;
    int m[4][4] = { { 0,4,0,2 },{ 0,0,0,0 },{ 0,2,0,2 },{ 4,0,0,2 } };
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
up:cin >> q;
    switch (q) {
    case 'l':
        k = 0;
        while (k <= 4) {
            for (int i = 0; i < 4; i++) {
                for (int j = 0; j < 4; j++) {
                    if (m[i][4 - j] == m[i][3 - j] || m[i][4 - j] == 0) {
                        if (j != 0) {
                            m[i][4 - j] = m[i][4 - j] + m[i][3 - j];
                            m[i][3 - j] = 0;
                        }
                    }
                }
            }
            k++;
        }
        break;
    case 'k':
        k = 0;
        while (k < 4) {
            for (int i = 0; i < 4; i++) {
                for (int j = 0; j < 4; j++) {
                    if (m[i][j] == m[i + 1][j] || m[i][j] == 0) {
                        if (i != 3) {
                            m[i][j] = m[i][j] + m[i + 1][j];
                            m[i + 1][j] = 0;
                        }
                    }
                }
            }
            k++;
        }
        break;
        case 'h':
        k = 0;
        while (k < 4) {
            for (int i = 0; i < 4; i++) {
                for (int j = 0; j < 4; j++) {
                    if (m[i][j] == m[i][j + 1] || m[i][j] == 0) {
                        if (j != 3) {
                            m[i][j] = m[i][j] + m[i][j + 1];
                            m[i][j + 1] = 0;
                        }
                    }
                }
            }
            k++;
        }
        break;
    case'j':
        k = 0;
        while (k < 4) {
            for (int i = 4; i > 0; i--) {
                for (int j = 0; j < 4; j++) {
                    if (m[i - 1][j] == m[i][j] || m[i][j] == 0) {
                        if (i != 0) {
                            m[i][j] = m[i - 1][j] + m[i][j];
                            m[i - 1][j] = 0;
                        }
                    }
                }
            }
            k++;
        }
        break;
    }
    if (q != 'q') {
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                cout << m[i][j]<<" ";
            }
            cout << endl;
        }
        goto up;
    }
    else return 0;
    cin.get();
    cin.get();
    return 0;
}
