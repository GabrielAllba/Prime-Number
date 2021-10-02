#include <iostream>
#include <string>
using namespace std;

int main() {

    int input;
    int divider = input;
    int howManyFactor = 0;

    std::string primeOrNot;
    std::string factor;

    std::cout << "input some number : ";
    std::cin >> input;

    while(divider > 0){
        if(input % divider == 0){
            howManyFactor += 1;
            factor += std::to_string(divider) + " ";
            divider -= 1;
        }
        else{
            divider -= 1;
        }
    }
    if(howManyFactor == 2 ){
        primeOrNot = "is a prime number";
    }
    else{
        primeOrNot = "is not a prime number";
    }
    std::cout << "how many factor : " << howManyFactor << "\n";
    std::cout << "factor = " << factor << "\n";
    std::cout << input << " " << primeOrNot << "\n";
  
}