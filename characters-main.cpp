#include <iostream>
#include <cctype>
#include <string>

/* Essayez par exemple de réaliser un programme qui remplace
tous les espaces d'une string par le symbole #. */

int main()
{
  std::string input;

  std::cout << "Enter a sentence:  ";
  getline(std::cin, input);

  int inputSize = input.size();

  for(int i=0; i<inputSize; i++)
    if(isspace(input[i]))
      input[i]='#';

  std::cout << input;

  return 0;
}
