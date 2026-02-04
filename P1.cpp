
#include <iostream>

int main() {
 int x = 4;
int* p = &x;
int y = *p;

y = 10;   
std::cout << y;
}
