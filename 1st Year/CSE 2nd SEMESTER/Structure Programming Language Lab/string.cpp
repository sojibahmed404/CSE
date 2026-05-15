#include<bits/stdc++.h>

using namespace std;

int maximum (int a, int b, int c);

int main() {

int a,b,c;

cout << "Enter three numbers";

cin >> a >> b >> c;

cout << "Maximum value is " << maximum(a,b,c) << endl;

return 0;
}
int maximum(int a, int b, int c) {

 int tmp = a<b ? a: b;

return (tmp>c  ?tmp: c);
}
