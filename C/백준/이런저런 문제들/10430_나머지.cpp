#include <iostream>

int main(void)
{
    int A, B, C;

    std::cin>>A>>B>>C;
    std::cout<<(A + B ) % C<<std::endl<<((A % C) + (B % C)) % C<<std::endl<<(A * B) % C<<std::endl<<((A % C) * (B % C)) % C<<std::endl;
}