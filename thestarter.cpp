// Including headerfiles

#include <iostream>
#include <string>

// Defining user

#define print(message)  std::cout << message << std::endl
#define spc             std::cout << "\n"

// Declaring functions

std::string name(std::string statement1);
std::string interest(std::string statement2);
int yearsOfProgramming(std::string statement3);

void introduction();

int main()
{
    std::string name1;
    std::string interest1;
    int yearsOfProgramming1;
    
    print("Hello world");
    
    name1 = name("What's your name?");
    interest1 = interest("Tell us about your interest");
    yearsOfProgramming1 = yearsOfProgramming("How many years of programming");
    
    spc;
    
    print(name1);
    print(interest1);
    print(yearsOfProgramming1);
   
    return 0;
}


void introduction()
{
    std::cout << "Hi, Programmer,\ntake a tour here" << std::endl;
}


std::string name(std::string statement1)
{
    std::cout << statement1 << std::endl;
    std::string name;
    std::cin >> name;
    
    return name;
}


std::string interest(std::string statement2)
{
    std::cout << statement2 << std::endl;
    std::string interest;
    std::getline(std::cin, interest);
    
    return interest;
}

int yearsOfProgramming(std::string statement3)
{
    std::cout << statement3 << std::endl;
    int yearsOfProgramming;
    std::cin >> yearsOfProgramming;
    
    return yearsOfProgramming;
}
