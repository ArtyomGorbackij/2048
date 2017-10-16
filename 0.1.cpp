#include "stdafx.h" 
#include <iostream>
#include <sstream>
using namespace std;
int main() {
char q;
int m[4][4] = { { 0,4,0,0 },{ 0,0,0,0 },{ 0,2,0,2 },{ 4,0,0,2 } };
up:cin » q;
if (q == 'k') {
for (int i = 0; i < 4; i++) {
for (int j = 0; j < 4; j++) {
if (m[i][j] == m[i + 1][j] || m[i][j] == 0) {
if (i !=3) {
m[i][j] = m[i][j] + m[i + 1][j];
m[i + 1][j] = 0;
}
}
}
}
}
if (q == 'j') {
for (int i = 0; i < 4; i++) {
for (int j = 0; j < 4; j++) {
if (m[i][j] == m[i + 1][j] || m[i][j] == 0) {
if (i != 3) {
m[i+1][j] = m[i][j] + m[i + 1][j];
m[i][j] = 0;
}
}
}
}
}
if (q == 'h') {
for (int i = 0; i < 4; i++) {
for (int j = 0; j < 4; j++) {
if (m[i][j] == m[i][j+1] || m[i][j] == 0) {
if (i != 3) {
m[i][j] = m[i][j] + m[i][j+1];
m[i][j+1] = 0;
}
}
}
}
}
if (q == 'l') {
for (int i = 0; i < 4; i++) {
for (int j = 0; j < 4; j++) {
if (m[i][j] == m[i][j + 1] || m[i][j] == 0) {
if (i != 3) {
m[i][j+1] = m[i][j] + m[i][j + 1];
m[i][j] = 0;
}
}
}
}
}
for (int i = 0; i <4; i++) {
for (int j = 0; j <4; j++) {
cout « m[i][j];
}
cout « endl;
}
if (q != 'q') goto up;
cin.get();
cin.get();
return 0;
}
