// Codeland Username Validation
// Have the function CodelandUsernameValidation(str) take the str parameter being passed and determine if the string is a valid username according to the following rules:

// 1. The username is between 4 and 25 characters.
// 2. It must start with a letter.
// 3. It can only contain letters, numbers, and the underscore character.
// 4. It cannot end with an underscore character.

// If the username is valid then your program should return the string true, otherwise return the string false.

#include <stdio.h>
#include <string.h>

void CodelandUsernameValidation(char *str) {
  int flag = 0, length;

  length = strlen(str);

  if (length < 4 || length > 25) {
    flag = 1; // length validation failed
  }

  if (!((str[0] >= 'a' && str[0] <= 'z') || (str[0] >= 'A' && str[0] <= 'Z'))) {
    flag = 1; // first character validation failed
  }

  for (int i = 0; i < length; i++) {
    if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9') || (str[i] == '_'))) {
      flag = 1; // character validation failed
    }
  }

  if (flag == 0) {
    printf("true");
  } else {
    printf("false");
  }
}

int main(void) {

  // Test with a username (you may want to replace this with user input or other test cases)
  CodelandUsernameValidation("Valid_Username123");

  return 0;
}
