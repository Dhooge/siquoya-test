#include <iostream>
#include <cctype>
#include <string>

int main()
{
  char character;

  std::cout << "Enter a character:  ";
  std::cin >> character;

  if(isdigit(character))
    std::cout << character << " is a digit." << std::endl;
  else if(isalpha(character))
    { if(isupper(character))
        std::cout << character << " is an uppercase letter." << std::endl;
      else std::cout << character << " is a lowercase letter." << std::endl; }

  return 0;
}
