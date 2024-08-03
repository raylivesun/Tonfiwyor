# Tonfiwyor ([wolfram/clouds/notebook](https://www.wolframcloud.com/))

Tonfiwyor appears to be a project or a programming language name. In the provided code snippet, it is mentioned as a Wolfram Cloud notebook project. The link provided (https://www.wolframcloud.com/) is also relevant to this context.

If you are looking for a programming language, Tonfiwyor might be a hypothetical or fictional language. If it's a real project, you can explore its documentation, source code, or community resources for more information.

# makefile 
```makefile 
CXX = g++
CXXFLAGS = -Wall -Werror -Wextra -pedantic -std=c++17 -g main.cpp
LDFLAGS =  main.cpp

SRC = 
OBJ = $(SRC:.cc=.o)
EXEC = tonfiwyor

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CXX) $(LDFLAGS) -o $@ $(OBJ) $(LBLIBS)

clean:
	rm -rf $(OBJ) $(EXEC)
```

# Example usage example c++ code example wolfram
```c++
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
```
$-> make all
