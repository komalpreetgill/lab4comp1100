#include <iostream>
#include <string>
#include<sstream>
// Include the library that will allow you to convert from string to integer
using namespace std ;

int main() {
    int  a,b,c,d;
  /*-------------------------------
  PART 1 - Reading multiple integers
  --------------------------------*/
  std::cout << std::endl << "=========================" << std::endl;
  std::cout <<              "=        PART 1         =" << std::endl;
  std::cout <<              "=========================" << std::endl;
  
 cin>>a>>b>>c; // Ask the user for 3 integers as input
  // The user should enter all integers on the same line, pressing enter only once






 d=a*b*c; // Multiply the three integers





 cout<<"The output of the numbers are "<<d<<endl; // Output the result of the multiplication



  /*-------------------------------
  PART 2 - Reading strings
  --------------------------------*/
  std::cout << std::endl << "=========================" << std::endl;
  std::cout <<              "=        PART 2         =" << std::endl;
  std::cout <<              "=========================" << std::endl;

  // Ask the user for three strings and output a haiku poem
  // http://examples.yourdictionary.com/examples-of-haiku-poems.html

std: string mountain;
std::string trusting ;
std::string alike ;
std::getline (std::cin,mountain);

cout<<"the name of mountain:  "<<endl;
std::getline (std::cin,mountain);
cout<<"to who trust you:   "<<endl;
std::getline(std::cin,trusting );
cout<<"like a :   "<<endl;
std::getline(std::cin,alike);
 std::cout<<"clim mountain "<<mountain<<",but slowly,slowly"<<endl;
 std::cout<<"trusting the "<<trusting <<",good and bad "<<endl;
 std::cout<<"pricks like a " <<alike <<endl ;






  /*-------------------------------
  PART 3 - Converting strings
  --------------------------------*/
  std::cout << std::endl << "=========================" << std::endl;
  std::cout <<              "=        PART 3         =" << std::endl;
  std::cout <<              "=========================" << std::endl;

   // Convert this string to an integer 
std::string myNumber ("1234");
int myint;
stringstream(myNumber)>>myint;


  
  std::cout<<myint << " :is an integer"; //Insert the integer before the text of this output

  return 0;
}
