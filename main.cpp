#include<iostream>
void myName(std::string name);
int main()
{
    std::cout<<"hello world\n";
    myName("Tom");

}

void myName(std::string name)
{
    std::cout<<"My name is "<<name<<std::endl;
}