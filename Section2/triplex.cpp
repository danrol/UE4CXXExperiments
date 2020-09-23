#include <iostream>

int main()
{
  std::cout << "PicleRick!!!!"; //way to write to console
  std::cout << std::endl; // add new line
  std::cout << "You are Pickle rick" << std::endl; // add new line at the end of the line
  std::cout << std::endl;

  int CodeA = 3; //variable declaration
  int CodeB = 3;
  const int CodeC = 2; //declare constant variable 

/* 
multi line comment
*/
  int CodeSum = CodeA + CodeB + CodeC;
  int CodeProduct = CodeA * CodeB *CodeC;
  std::cout << std::endl; // add new line
  //std::cout << a; //print variable to console
  //std::cout << a + b + c; // print sum of a + b + c
  std::cout << "There are 3 numbers in the code\n";
  std::cout << "The codes add-up to: " << CodeSum << std::endl;//add variable value at the end of the line
  std::cout << "Product of those numbers is equal to " << CodeProduct << std::endl;

  int GuessA, GuessB, GuessC;
  std::cout << "Enter first number: ";
  std::cin >> GuessA; // get user's input from console
  std::cout << "Enter second number: ";
  std::cin >>GuessB;
  std::cout << "Enter third number: ";
  std::cin >> GuessC;

  std::cout << "You entered: " << GuessA << " " << GuessB << " " << GuessC << std::endl;

int GuessSum = GuessA + GuessB + GuessC;
int GuessProduct = GuessA * GuessB * GuessC;

bool IsGuessRight; // boolean value
return 0;
}