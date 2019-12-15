#include <iostream>
#include <conio.h>
#include <string>
#include <stdio.h>
using namespace std;

void typer(char material = '0') {
char t;
int i = 0;
freopen("mate"+material, "r", stdin);
while(1) {
getchar(t);
if(t!=EOF) {
if (kbhit()) {
cout<<t;
}} else break;
} fclose(stdin);}
