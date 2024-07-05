#include <iostream>

void fun(int n) {
    if (n > 0) {
        fun(n - 1);
        std::cout << n << " ";
    }
}

void fun1(int n) {
    if (n > 0) {
        std::cout << n << " ";
        fun(n - 1);
    }
}


int main() {
    int x = 3;
    fun(x);
    fun1(x);
   return 0;
}
