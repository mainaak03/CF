#include <iostream>
#include <string.h>
using namespace std;
 
int main() {
 
char str[1001];
cin.getline(str,1001);
char a = str[0];
if (str[0]>='a' && str[0]<='z') {str[0] = str[0]-32 ; }
puts(str);
return 0;
}