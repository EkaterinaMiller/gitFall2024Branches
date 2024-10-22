#include<iostream>
int add(int a, int b);
void myName(std::string name);
int main()
{
    std::cout<<"hello world\n";
    myName("Tom");
    std::cout<<"The sum of 5 and 7 is "<<add(5,7)<<"\n";
}

void myName(std::string name)
{
    std::cout<<"My name is "<<name<<std::endl;
}
int add(int a, int b)
{
    return a+b;
}