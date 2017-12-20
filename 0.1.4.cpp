#include <iostream>
#include <sstream>
using namespace std;
int main() {
    char q;
    int p;
    int m[4][4] = { { 2,2,2,2 },{ 0,2,2,2 },{ 0,2,2,2 },{ 0,0,0,2 } };
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
up:cin >> q;
    switch (q) {
        case 'l':
            p=0;
            while ( p<2){
                for(int i=0;i<4;i++){
                    for(int j=3;j>0;j--){
                        if (m[i][j]==0)
                            swap (m[i][j],m[i][j-1]);
                    }
                }
                p++;
            }
            for(int i=0;i<4;i++){
                for(int j=3;j>0;j--){
                    if(m[i][j]==m[i][j-1]){
                        int a= m[i][j]+m[i][j-1];
                        m[i][j]=a;
                        m[i][j-1]=0;
                    }
                }
            }
            p=0;
            while ( p<2){
                    for(int i=0;i<4;i++){
                        for(int j=3;j>0;j--){
                            if (m[i][j]==0)
                                swap (m[i][j],m[i][j-1]);
                        }
                    }
                p++;
            }
            break;
        case 'k':
             p=0;
            while ( p<2){
                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 4; j++) {
                        if (m[i][j] == 0) {
                            swap(m[i][j],m[i+1][j]);
                        }
                    }
                }
                p++;
            }
            for (int i = 0; i < 4; i++) {
                for (int j = 0; j < 4; j++) {
                    if (m[i][j] == m[i-1][j]) {
                        int a=m[i][j]+m[i-1][j];
                        m[i][j]=0;
                        m[i-1][j]=a;
                    }
                }
            }
            p=0;
    while ( p<2){
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 4; j++) {
                if (m[i][j] == 0) {
                    swap(m[i][j],m[i+1][j]);
                }
            }
        }
        p++;
    }
            break;
        case 'h':
            p=0;
            while ( p<2){
                for (int i = 0; i < 4; i++) {
                    for (int j = 1; j <4; j++) {
                        if (m[i][j-1] == 0) {
                            swap(m[i][j-1],m[i][j]);
                        }
                    }
                }
                p++;
            }
            for (int i = 0; i < 4; i++) {
                for (int j = 1; j <4; j++) {
                        if(m[i][j]==m[i][j-1]){
                            int a=m[i][j]+m[i][j-1];
                            m[i][j]=0;
                            m[i][j-1]=a;
                        }
                    }
                }
            p=0;
       while ( p<2){
            for (int i = 0; i < 4; i++) {
                for (int j = 1; j <4; j++) {
                    if (m[i][j-1] == 0) {
                        swap(m[i][j-1],m[i][j]);
                    }
                }
            }
           p++;
       }
            break;
        case'j':
            p=0;
     while ( p<2){
            for (int i = 3; i > 0; i--) {
                for (int j = 0; j < 4; j++) {
                    if ( m[i][j] == 0 ) {
                        swap(m[i][j], m[i - 1][j]);
                    }
                }
            }
            p++;
    }
            for (int i = 3; i > 0; i--) {
                for (int j = 0; j < 4; j++) {
                    if (m[i][j] == m[i - 1][j]) {
                        int a = m[i][j] + m[i - 1][j];
                        m[i][j] = a;
                        m[i - 1][j] = 0;
                    }
                }
            }
            p=0;
        while ( p<2){
            for (int i = 3; i > 0; i--) {
                for (int j = 0; j < 4; j++) {
                    if ( m[i][j] == 0 ) {
                        swap(m[i][j], m[i - 1][j]);
                    }
                }
            }
            p++;
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
    else cin.get();
    return 0;
}
