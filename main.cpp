#include <string.h>
#include <stdio.h>
#include <stdlib.h>


// Function to convert a string to lowercase
void toLowerCase(char* str) {
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
    }
}

// Function to reverse a string
void reverseString(char* str) {
    int len = strlen(str);
    char temp;
    for (int i = 0; i < len / 2; i++) {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

// Function to check if a string is a palindrome
int isPalindrome(char* str) {
    toLowerCase(str);
    reverseString(str);
    return strcmp == 0;
}

int main() {
    char inputStr[100];
    printf("Enter a string: ");
    scanf("%[^\n]", inputStr);

    char* originalStr = strdup(inputStr); // Create a copy of the input string

    if (isPalindrome(inputStr)) {
        printf("%s is a palindrome.\n", inputStr);
    } else {
        printf("%s is not a palindrome.\n", inputStr);
    }

    free(originalStr); // Free the dynamically allocated memory

    return 0;
}
