#include <iostream>
#include <sstream>
using namespace std;
int main() {
    char q;
    int p;
    bool ap= false;
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
                        if (m[i][j]==0&& m[i][j-1]!=0)
                            swap (m[i][j],m[i][j-1]);
                        ap= true;
                    }
                }
                p++;
            }
            for(int i=0;i<4;i++){
                for(int j=3;j>0;j--){
                    if(m[i][j]==m[i][j-1]&& m[i][j-1]!=0){
                        int a= m[i][j]+m[i][j-1];
                        m[i][j]=a;
                        m[i][j-1]=0;
                        ap= true;
                    }
                }
            }
            p=0;
            while ( p<2){
                for(int i=0;i<4;i++){
                    for(int j=3;j>0;j--){
                        if (m[i][j]==0&& m[i][j-1]!=0)
                            swap (m[i][j],m[i][j-1]);
                    ap= true;}
                }
                p++;
            }
            break;
        case 'k':
            p=0;
            while ( p<2){
                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 4; j++) {
                        if (m[i][j] == 0&& m[i+1][j]!=0) {
                            swap(m[i][j],m[i+1][j]);
                        ap= true;}
                    }
                }
                p++;
            }
            for (int i = 0; i < 4; i++) {
                for (int j = 0; j < 4; j++) {
                    if (m[i][j] == m[i-1][j]&& m[i+1][j]!=0) {
                        int a=m[i][j]+m[i-1][j];
                        m[i][j]=0;
                        m[i-1][j]=a;
                    ap= true;}
                }
            }
            p=0;
            while ( p<2){
                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 4; j++) {
                        if (m[i][j] == 0 && m[i+1][j]!=0) {
                            swap(m[i][j],m[i+1][j]);
                        ap= true;}
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
                        if (m[i][j-1] == 0 && m[i][j-1]!=0) {
                            swap(m[i][j-1],m[i][j]);
                        ap= true;}
                    }
                }
                p++;
            }
            for (int i = 0; i < 4; i++) {
                for (int j = 1; j <4; j++) {
                    if(m[i][j]==m[i][j-1] && m[i][j-1]!=0){
                        int a=m[i][j]+m[i][j-1];
                        m[i][j]=0;
                        m[i][j-1]=a;
                    ap= true;}
                }
            }
            p=0;
            while ( p<2){
                for (int i = 0; i < 4; i++) {
                    for (int j = 1; j <4; j++) {
                        if (m[i][j-1] == 0 && m[i][j-1]!=0) {
                            swap(m[i][j-1],m[i][j]);
                        ap= true;}
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
                        if ( m[i][j] == 0 && m[i-1][j]!=0 ) {
                            swap(m[i][j], m[i - 1][j]);
                  ap= true;      }
                    }
                }
                p++;
            }
            for (int i = 3; i > 0; i--) {
                for (int j = 0; j < 4; j++) {
                    if (m[i][j] == m[i - 1][j] && m[i][j]!=0) {
                        int a = m[i][j] + m[i - 1][j];
                        m[i][j] = a;
                        m[i - 1][j] = 0;
         ap= true;           }
                }
            }
            p=0;
            while ( p<2){
                for (int i = 3; i > 0; i--) {
                    for (int j = 0; j < 4; j++) {
                        if ( m[i][j] == 0 && m[i-1][j]!=0) {
                            swap(m[i][j], m[i - 1][j]);
ap= true;                        }
                    }
                }
                p++;
            }
            break;
    }
    if(ap==true){
    uu:int i, j;
    i = rand() % 4;
    j = rand() % 4;
    if (m[i][j] == 0) m[i][j] = rand() % 10 + 20;
    else goto uu;
    if (m[i][j] == 20 || m[i][j] == 21 || m[i][j] == 22 || m[i][j] == 23 || m[i][j] == 24 || m[i][j] == 25 || m[i][j] == 26 || m[i][j] == 27 || m[i][j] == 28 || m[i][j] == 29)m[i][j] = 2;
        else if(m[i][j]==30) m[i][j] = 4;}
    if (q != 'q') {
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                cout << m[i][j] << " ";
            }
            cout << endl;
        }
        ap=false;
        goto up;
    }
    else cin.get();
    return 0;
}
