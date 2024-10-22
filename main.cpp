#include<iostream>
int add(int a, int b);
int main()
{
    std::cout<<"hello world\n";
    std::cout<<"The sum of 5 and 7 is "<<add(5,7)<<"\n";
}
int add(int a, int b)
{
    return a+b;
}