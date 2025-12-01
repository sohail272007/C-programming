#include <stdio.h>

int main() {
    char str[100];
    int i, start, end, flag = 1;

    printf("Enter a string: ");
    scanf("%[^\n]s", str);
  
    for (end = 0; str[end] != '\0'; end++);

    end--;  
    start = 0;

    while (start < end) {
        if (str[start] != str[end]) {
            flag = 0;
            break;
        }
        start++;
        end--;
    }

    if (flag == 1)
        printf("The string is a palindrome.\n");
    else
        printf("The string is NOT a palindrome.\n");

    return 0;
    }
