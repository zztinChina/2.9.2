#include <stdio.h>  
#include <stdbool.h>  

bool is_palindrome(int x) {
    if (x < 0) {
        return false; // 负数不是回文数  
    }

    int reversed = 0;
    int original = x;

    while (x != 0) {
        int digit = x % 10;
        reversed = reversed * 10 + digit;
        x /= 10;
    }

    return original == reversed;
}

int main() {
    int num1 = 12321;
    int num2 = 123456;

    printf("%d is %s palindrome\n", num1, is_palindrome(num1) ? "a" : "not a");
    printf("%d is %s palindrome\n", num2, is_palindrome(num2) ? "a" : "not a");

    return 0;
}